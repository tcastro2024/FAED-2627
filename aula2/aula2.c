// aula2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _USE_MATH_DEFINES   // para usar constantes matemáticas como M_PI
#include <stdio.h>   // para funções de entrada e saída como printf, scanf, etc.
#include <stdlib.h> // para funções de alocação de memória, conversão de tipos, etc.
#include <locale.h> // para funções de localização em relação ao país e lingua como setlocale, localeconv, etc.
#include <time.h>  // para funções de data e hora como time, localtime, strftime, etc.
#include <string.h> // para funções de manipulação de strings como strcpy, strcat, strlen, etc.
#include <conio.h> // para _getch()
#include <windows.h>   // para SetConsoleCP / SetConsoleOutputCP
#include <math.h>  // para funções matemáticas como pow, sqrt, sin, cos, tan, etc.

int main() {

	//SetConsoleOutputCP(CP_UTF8);   // saída (printf) em UTF-8
	//SetConsoleCP(CP_UTF8);         // entrada (teclado) em UTF-8

	// Definir o idioma para suportar caracteres com acentos e especiais
	//setlocale(LC_ALL, "pt-PT.UTF-8");

	//ou outputs com enconding Windows-1252 (Western European)
	// para consola do Windows, que é o padrão para português em Windows
	// ou com versões da consola/IDE Visual Studio mais antigas do Windows
	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	setlocale(LC_ALL, "pt-PT");


#pragma region Exercicio com variaveis

	//***** 1. Declare variáveis para armazenar : nome(array de char), idade(int) e altura(float).
	// Atribua valores e mostre-os na consola.	
	//char nome[150];
	//int idade;
	//float altura;

	////Atribuição de valores
	//strcpy_s(nome, sizeof(nome), "Andre Campos");
	//idade = 20;
	//altura = 1.80f;

	//printf("Nome: %s \n", nome);
	//printf("Idade: %d \n", idade);
	//printf("Altura: %.2f \n", altura);

	//printf("\n");
	//printf("\n");

	//char nome1[50] = "João Silva";
	//int idade1 = 30;
	//float altura1 = 1.75;

	//printf("Nome: %s\n", nome1);
	//printf("Idade: %d\n", idade1);
	//printf("Altura: %.2f\n", altura1);

	//printf("\n");
	//printf("\n");

	//***** 2. Leia nome, dia, mês e ano de nascimento e escreva na consola.
	//char nome[50];
	//int dia, mes, ano;

	//printf_s("Digite o nome: ");
	//gets_s(nome, sizeof(nome));

	//printf_s("Digite o dia de nascimento: ");
	//scanf_s("%d", &dia);

	//printf_s("Digite o mês de nascimento: ");
	//scanf_s("%d", &mes);

	//printf_s("Digite o ano de nascimento: ");
	//scanf_s("%d", &ano);

	//printf_s("\nNome: %s\nData de Nascimento: %02d/%02d/%04d", nome, dia, mes, ano);
	
	//***** 3. Fazer um programa para ler o nome e a idade de duas pessoas.
	//char nome1[50], nome2[50];
	//int idade1, idade2;

	//printf_s("Digite o nome da primeira pessoa: ");
	//gets_s(nome1, sizeof(nome1));

	//printf_s("Digite a idade da primeira pessoa: ");
	//scanf_s("%d", &idade1); 

	//// Limpar o buffer do teclado para evitar problemas com a leitura do próximo nome
	//getchar();

	//printf_s("Digite o nome da segunda pessoa: ");
	//gets_s(nome2, sizeof(nome2));

	//printf_s("Digite a idade da segunda pessoa: ");
	//scanf_s("%d", &idade2);


	//printf_s("\nPrimeira Pessoa: %s, Idade: %d\n", nome1, idade1);
	//printf_s("Segunda Pessoa: %s, Idade: %d\n", nome2, idade2);

	//***** 4. Fazer um programa para ler nome e salário de dois funcionários.
	//char nome1[50], nome2[50];
	//float salario1, salario2;

	//printf_s("Digite o nome do primeiro funcionário: ");
	//gets_s(nome1, sizeof(nome1));

	//printf_s("Digite o salário do primeiro funcionário: ");
	//scanf_s("%f", &salario1);

	//getchar(); // Limpar o buffer do teclado antes de ler o próximo nome

	//printf_s("Digite o nome do segundo funcionário: ");
	//gets_s(nome2, sizeof(nome2));

	//printf_s("Digite o salário do segundo funcionário: ");
	//scanf_s("%f", &salario2);

	//printf_s("\nPrimeiro Funcionário: %s, Salário: %.2f\n", nome1, salario1);
	//printf_s("Segundo Funcionário: %s, Salário: %.2f\n", nome2, salario2);

	//***** 5. Fazer um programa para ler o código de uma peça,7
	// a sua quantidade e o preço da peça. (Escrito em formato papel)

	//char codigo[50];
	//int qtd;
	//float preco;

	//printf_s("Codigo: ");
	//gets_s(codigo, sizeof(codigo));
	//getchar();

	//printf_s("Quatidade: ");
	//scanf_s("%d", &qtd);

	//printf_s("Preço: ");
	//scanf_s("%f", &preco);

	//printf_s("\nCodigo: %s\nQuantidade: %d\nPreço: %.2f", codigo, qtd, preco);

	//6. Qual a diferença entre os tipos de dados int ou uint ?
	// int é um tipo de dado inteiro com sinal, ou seja, pode armazenar valores negativos e positivos.
	// O intervalo de valores que um int pode armazenar depende do tamanho da variável (geralmente 4 bytes), 
	// mas geralmente varia de -2.147.483.648 a 2.147.483.647.
	// uint é um tipo de dado inteiro sem sinal, ou seja, só pode armazenar valores positivos.
	// 
	//7. Crie um exemplo de comentários com uma linha e outro com várias linhas.
	
	// Este é um comentário de uma linha

	/*
	* Este é um comentário de várias linhas
	* Pode ser usado para explicar partes do código ou fornecer informações adicionais.
	* Pode ser útil para documentação ou para desativar temporariamente partes do código
	* durante o desenvolvimento.
	*/

	//8. Escreva um programa que peça e escreva o nome, email e idade do utilizador
	//no ecrã.
	//char nome[50], email[50];
	//int idade;

	//printf_s("Digite o nome: ");
	//gets_s(nome, sizeof(nome));

	//getchar(); // Limpar o buffer do teclado antes de ler o próximo valor

	//printf_s("Digite o email: ");
	//gets_s(email, sizeof(email));

	//printf_s("Digite a idade: ");
	//scanf_s("%d", &idade);

	//printf_s("\nNome: %s\nEmail: %s\nIdade: %d", nome, email, idade);

	//9. Crie o exemplo de uma fatura de um supermercado no ecrã.
	
	//printf_s("********** Fatura Supermercado **********\n");
	//printf_s("Produto: Arroz\n");
	//printf_s("Quantidade: 2\n");
	//printf_s("Preço Unitário: 1.50\n");
	//printf_s("Subtotal: 3.00\n");
	//printf_s("Produto: Feijão\n");
	//printf_s("Quantidade: 1\n");
	//printf_s("Preço Unitário: 2.00\n");
	//printf_s("Subtotal: 2.00\n");
	//printf_s("Produto: Leite\n");
	//printf_s("Quantidade: 3\n");
	//printf_s("Preço Unitário: 0.80\n");
	//printf_s("Subtotal: 2.40\n");
	//printf_s("***************************************\n");

#pragma endregion

#pragma region Operadores

	//***** 1. Fazer um programa para ler nome e salário de dois funcionários.
	//   Depois, mostrar a média do salário dos funcionários.
	//char nome1[50], nome2[50];
	//float val1, val2, resultado;

	//printf("Digite o nome 1: ");
	//gets_s(nome1, sizeof(nome1));

	//getchar();

	//printf("Digite o nome 2: ");
	//gets_s(nome2, sizeof(nome2));

	//printf("Digite o valor 1: ");
	//scanf_s("%f", &val1);

	//printf("Digite o valor 2: ");
	//scanf_s("%f", &val2);

	//resultado = (val1 + val2) / 2;

	//printf_s("\nNome1: %s", nome1);
	//printf_s("\nNome2: %s", nome2);
	//printf_s("\nResultado da media dos (%f + %f)/2: %f", val1, val2, resultado);

	//***** 2. Faça um programa que calcule a área de um triângulo. Formula : área = (base x altura) / 2
	//int base, altura;
	//float area;

	//printf_s("Digite o valor da base: ");
	//scanf_s("%d", &base);

	//printf_s("\nDigite o valor da altura: ");
	//scanf_s("%d", &altura);

	//area = (float) (base * altura) / 2;

	//printf_s("\nResultado da area do triangulo (%d x %d)/2: %.2f", base, altura, area);

	//***** 3. Declare uma constante para PI(3.14159) e calcule a área de um círculo de raio 5.0.
	//   Mostre o resultado.
	//float raio, areaCirculo;

	//printf_s("Digite o valor do raio: ");
	//scanf_s("%f", &raio);

	//// Calculando a área do círculo usando a constante M_PI definida em math.h
	//areaCirculo = M_PI * raio * raio;
	//printf_s("A área do círculo de raio %.2f é %.2f\n", raio, areaCirculo);

	//***** 4. Crie uma calculadora que receba dois números e realize as 4 operações básicas.
	/*float num1, num2, soma, subtracao, multiplicacao, divisao;
	
	printf_s("Digite o primeiro número: ");
	scanf_s("%f", &num1);

	printf_s("Digite o segundo número: ");
	scanf_s("%f", &num2);

	soma = num1 + num2;

	subtracao = num1 - num2;

	multiplicacao = num1 * num2;

	if (num2 != 0) {
		divisao = num1 / num2;
	} else {
		printf_s("Erro: Divisão por zero não é permitida.\n");
	}

	printf_s("\nResultados:\n");
	printf_s("Soma: %.2f + %.2f = %.2f\n", num1, num2, soma);
	printf_s("Subtração: %.2f - %.2f = %.2f\n", num1, num2, subtracao);
	printf_s("Multiplicação: %.2f * %.2f = %.2f\n", num1, num2, multiplicacao);
	if (num2 != 0) {
		printf_s("Divisão: %.2f / %.2f = %.2f\n", num1, num2, divisao);
	}*/

	//***** 5.Crie um programa que leia 3 notas de um aluno e calcule a média aritmética.
	//int nota1, nota2, nota3;
	//float media;

	//printf("Digite a primeira nota: ");
	//scanf_s("%d", &nota1);

	//printf("Digite a segunda nota: ");
	//scanf_s("%d", &nota2);

	//printf("Digite a terceira nota: ");
	//scanf_s("%d", &nota3);

	//media = (float)(nota1 + nota2 + nota3) / 3;

	//printf("A média aritmética das notas (%d, %d, %d) é: %.2f", nota1, nota2, nota3, media);

	//***** 6.Faça um programa que leia um número inteiro e o imprima na consola.
	//	int numero;
	//
	//	printf("Digite um número inteiro: ");
	//	scanf_s("%d", &numero);
	//
	//	printf("O número indicado foi: %d", numero);
	//	printf("\n");
	//	printf("\n");

	//7. Peça ao utilizador para digitar 3 valores inteiros e imprima a soma deles
	//	na consola. (Escrito em formato papel)
	/*int val1, val2, val3, resultado;

	printf("Valor 1: ");
	scanf_s("%d", &val1);

	printf("Valor 2: ");
	scanf_s("%d", &val2);

	printf("Valor 3: ");
	scanf_s("%d", &val3);

	resultado = val1 + val2 + val3;

	printf_s("\nResultado da soma dos (%d + %d + %d): %d", val1, val2, val3, resultado);*/

	//***** 8.Leia um número inteiro e imprima o resultado do quadrado deste número.
	//	int numero1, resultado = 0;
	//
	//	printf("Digite um número inteiro: ");
	//	scanf_s("%d", &numero1);
	//
	//	resultado = numero1 * numero1;
	//
	//	printf("O quadrado de %d é de %d", numero1, resultado);
	
	//***** 9.Faça um algoritmo que converta uma temperatura fornecida em graus Fahrenheit para Centígrados.
	// Sugestão: utilize a fórmula C = 5 / 9 (F - 32)
	float fahrenheit, celsius;

	printf("Digite a temperatura em Fahrenheit: ");
	scanf_s("%f", &fahrenheit);

	celsius = (5.0f / 9.0f) * (fahrenheit - 32.0f);

	printf("A temperatura em Celsius é: %.2f\n", celsius);


#pragma endregion



#pragma endregion


	printf("\n");

	printf("Prima qualquer tecla...");
	printf("\n");
	_getch();

	return 0;
}
