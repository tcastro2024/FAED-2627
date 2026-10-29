#include <stdio.h>
#ifdef _WIN32
#include <windows.h>                 // obrigatório antes de sql.h
#pragma comment(lib, "odbc32.lib")
#endif
#include <sql.h>
#include <sqlext.h>

#ifndef CONN
#define CONN "DRIVER={ODBC Driver 17 for SQL Server};" \
             "SERVER=DESKTOP-V4SOL10;DATABASE=Escola;" \
             "Trusted_Connection=yes;TrustServerCertificate=yes;"
#endif

// ******** Configuração necessaria: ********
// Project -> Properties -> Advanced -> Character Set -> Use Multi-Byte Character Set

void mostrarErro(SQLSMALLINT tipo, SQLHANDLE h)
{
    SQLCHAR estado[6], msg[256];
    SQLINTEGER codigo;
    SQLSMALLINT len;
    if (SQLGetDiagRec(tipo, h, 1, estado, &codigo, msg, sizeof(msg), &len) == SQL_SUCCESS)
        printf("Erro %s: %s\n", estado, msg);
}

int main(void)
{
    SQLHENV env;
    SQLHDBC dbc;
    SQLHSTMT stmt;
    SQLRETURN ret;

    // 1. Ambiente ODBC (versão 3)
    SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
    SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);

    // 2. Ligação à base de dados
    SQLAllocHandle(SQL_HANDLE_DBC, env, &dbc);
    ret = SQLDriverConnect(dbc, NULL, (SQLCHAR*)CONN, SQL_NTS,
        NULL, 0, NULL, SQL_DRIVER_NOPROMPT);
    if (!SQL_SUCCEEDED(ret))
    {
        mostrarErro(SQL_HANDLE_DBC, dbc);
        return 1;
    }
    printf("Ligado à base de dados.\n");

    // 3. INSERT com parâmetros (?)
    SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
    char nome[51] = "Susana";
    double nota = 10.0;
    SQLLEN lenNome = SQL_NTS;
    SQLPrepare(stmt, (SQLCHAR*)"INSERT INTO Aluno (nome, nota) VALUES (?, ?)", SQL_NTS);
    SQLBindParameter(stmt, 1, SQL_PARAM_INPUT, SQL_C_CHAR, SQL_VARCHAR,
        50, 0, nome, 0, &lenNome);
    SQLBindParameter(stmt, 2, SQL_PARAM_INPUT, SQL_C_DOUBLE, SQL_DOUBLE,
        0, 0, &nota, 0, NULL);
    ret = SQLExecute(stmt);
    if (!SQL_SUCCEEDED(ret)) mostrarErro(SQL_HANDLE_STMT, stmt);
    SQLFreeHandle(SQL_HANDLE_STMT, stmt);


    // 4. SELECT e ler os resultados
    SQLAllocHandle(SQL_HANDLE_STMT, dbc, &stmt);
    ret = SQLExecDirect(stmt, (SQLCHAR*)"SELECT id, nome, nota FROM Aluno ORDER BY id", SQL_NTS);
    if (!SQL_SUCCEEDED(ret)) { mostrarErro(SQL_HANDLE_STMT, stmt); return 1; }

    SQLINTEGER id;
    SQLCHAR nomeLido[51];
    double notaLida;
    SQLLEN ind1, ind2, ind3;
    SQLBindCol(stmt, 1, SQL_C_LONG, &id, 0, &ind1);
    SQLBindCol(stmt, 2, SQL_C_CHAR, nomeLido, sizeof(nomeLido), &ind2);
    SQLBindCol(stmt, 3, SQL_C_DOUBLE, &notaLida, 0, &ind3);
    while (SQLFetch(stmt) == SQL_SUCCESS)        // uma linha de cada vez
        printf("%d  %-5s %5.1f\n", (int)id, nomeLido, notaLida);

    // 5. Libertar memoria e variaveis utilizadas
    SQLFreeHandle(SQL_HANDLE_STMT, stmt);
    SQLDisconnect(dbc);
    SQLFreeHandle(SQL_HANDLE_DBC, dbc);
    SQLFreeHandle(SQL_HANDLE_ENV, env);
    return 0;
}
