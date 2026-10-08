// aula2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <conio.h>

int main() {

	// Definir o idioma para suportar caracteres com acentos e especiais
	setlocale(LC_ALL, "pt_PT");


#pragma region Exercicio com variaveis

	//1. Declare variáveis para armazenar : nome(array de char), idade(int) e altura(float).
	// Atribua valores e mostre-os na consola.	
	char nome[150];
	int idade;
	float altura;

	//Atribuição de valores
	strcpy_s(nome, sizeof(nome), "Andre Campos");
	idade = 20;
	altura = 1.80f;

	printf("Nome: %s \n", nome);
	printf("Idade: %d \n", idade);
	printf("Altura: %.2f \n", altura);

	printf("\n");
	printf("\n");

	char nome1[50] = "João Silva";
	int idade1 = 30;
	float altura1 = 1.75;

	printf("Nome: %s\n", nome1);
	printf("Idade: %d\n", idade1);
	printf("Altura: %.2f\n", altura1);

	printf("\n");
	printf("\n");

	//2. Leia nome, dia, mês e ano de nascimento e escreva na consola.
	//3. Fazer um programa para ler o nome e a idade de duas pessoas.
	//4. Fazer um programa para ler nome e salário de dois funcionários.
	//5. Fazer um programa para ler o código de uma peça, a sua quantidade e o preço da peça. (Escrito em formato papel)


#pragma endregion

#pragma region 1 Exercicio

	//Faça um programa que leia um número inteiro e o imprima na consola.

	int numero;

	printf("Digite um número inteiro: ");
	scanf_s("%d", &numero);

	printf("O número indicado foi: %d", numero);
	printf("\n");
	printf("\n");

#pragma endregion

#pragma region 2 Exercicio

	//Peça ao utilizador para digitar 3 valores inteiros e imprima a soma deles na consola.

	int valor1 = 0, valor2, valor3, soma = 0;

	printf("Digite o valor 1: ");
	scanf_s("%d", &valor1);

	printf("Digite o valor 2: ");
	scanf_s("%d", &valor2);

	printf("Digite o valor 3: ");
	scanf_s("%d", &valor3);

	soma = valor1 + valor2 + valor3;

	printf("O soma dos valores indicados é de: %d", soma);

	printf("\n");
	printf("\n");



#pragma endregion


#pragma region 3 Exercicio

	//Leia um número inteiro e imprima o resultado do quadrado deste número.

	int numero1, resultado = 0;

	printf("Digite um número inteiro: ");
	scanf_s("%d", &numero1);

	resultado = numero1 * numero1;

	printf("O quadrado de %d é de %d", numero1, resultado);

#pragma endregion


	printf("\n");

	printf("Prima qualquer tecla...");
	printf("\n");
	_getch();

	return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
