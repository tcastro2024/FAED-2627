

#define _CRT_SECURE_NO_WARNINGS 
#define _USE_MATH_DEFINES   // para usar
#include <stdio.h>   // p.
#include <stdlib.h> // pa
#include <locale.h> /
#include <time.h>  // para fus de data e hora como time, localtime, strftime, etc.
#include <string.h> // par
#include <conio.h> // para _getch()
#include <windows.h>   // para SetConsoleCP / SetConsoleOutputCP
#include <math.h>  // 



int main()
{

	SetConsoleOutputCP(1252);
	SetConsoleCP(1252);
	setlocale(LC_ALL, "pt-PT");

	// 1.Leia o nome e a idade de duas pessoas e mostre o
	// 	nome da pessoa mais velha(if - else)

	char nome1[50], nome2[50];

	int idade1, idade2;

	printf("Nome 1º pessoa: ");
	gets(nome1, sizeof(nome1));

	printf("Nome 2º pessoa: ");
	gets(nome2, sizeof(nome2));

	printf("Idade 1º pessoa: ");
	scanf("%d", &idade1);

	printf("Idade 2º pessoa: ");
	scanf("%d", &idade2);

	if (idade1 > idade2)
	{
		printf("A pessoa %s é a mais velha.", nome1);
	}
	else
	{
		printf("A pessoa %s é a mais velha.", nome2);
	}

	printf("\n");

	printf("Prima qualquer tecla...");
	printf("\n");
	_getch();

	return 0;
}
