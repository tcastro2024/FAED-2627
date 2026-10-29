// aula2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS 
#define _USE_MATH_DEFINES   // para usar constantes matemáticas como M_PI
#include <stdio.h>   // para funções de entrada e saída como printf, scanf, etc.
#include <stdlib.h> // para funções de alocação de memória, conversão de tipos, etc.
#include <locale.h> // para funções de localização em relação ao país e lingua como setlocale, localeconv, etc.
#include <time.h>  // para funções de data e hora como time, localtime, strftime, etc.
#include <string.h> // para funções de manipulação de strings como strcpy, strcat, strlen, etc.
#include <conio.h> // para _getch()
#include <windows.h>   // para SetConsoleCP / SetConsoleOutputCP
#include <math.h>  // para funções matemáticas como pow, sqrt, sin, cos, tan, etc.

int mediaDeDuasIdades(int idade1, int idade2) {
	return (idade1 + idade2) / 2;
}

float menor3Precos(float preco1, float preco2, float preco3) 
{
	//preco1 = 9
	//preco2 = 8
	//preco3 = 5

	float menorPreco = preco1; // 9

	// 9 > 8
	if (menorPreco > preco2)
	{
		menorPreco = preco2;
	}
	//menorPreco  = 8

	// 8 > 5
	if (menorPreco > preco3)
	{
		menorPreco = preco3;
	}

	//5
	return menorPreco;
}

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



#pragma region Ficha de exercicios
//
//
//1. Faça um programa que calcule a área do triangulo.Formula : área = (base x altura) / 2.
float area, base, altura;

printf("Digite o valor da base: ");
scanf_s("%f", &base);

printf("Digite o valor da altura: ");
scanf_s("%f", &altura);

area = (base * altura) / 2;

printf("A área do triângulo é: %.2f\n", area);

//2. Faça um programa para verificar o maior de dois números inteiros(Utilize a estrutura ifelse).

int num1, num2;

printf("Digite o primeiro número inteiro: ");
scanf_s("%d", &num1);

printf("Digite o segundo número inteiro: ");
scanf_s("%d", &num2);

if (num1 > num2) {
	printf("O maior número é: %d\n", num1);
}
else if (num2 > num1) {
	printf("O maior número é: %d\n", num2);
}
else {
	printf("Os dois números são iguais: %d\n", num1);
}

//3. Leia n valores representativos do pH e mostre, para cada valor, que tipo de solução
//representa : ácida(pH < 7), neutra(pH = 7) ou alcalina(pH > 7) (Utilize a estrutura for).

int quantidade;
float ph;

printf("Digite a quantidade de valores de pH: ");
scanf_s("%d", &quantidade);

for (int i = 0; i < quantidade; i++) {
	printf("Digite o valor do pH: ");
	scanf_s("%f", &ph);

	if (ph < 7) {
		printf("O valor %.2f representa uma solução ácida.\n", ph);
	} else if (ph == 7) {
		printf("O valor %.2f representa uma solução neutra.\n", ph);
	} else {
		printf("O valor %.2f representa uma solução alcalina.\n", ph);
	}
}


//4. Criar um método que calcule a média de 2 idades.

int idade1, idade2;
float mediaIdades = 0;

printf("Digite a primeira idade: ");
scanf_s("%d", &idade1);

printf("Digite a segunda idade: ");
scanf_s("%d", &idade2);

mediaIdades = mediaDeDuasIdades(idade1, idade2);
printf("A média das duas idades é: %.2f\n", mediaIdades);

#pragma endregion


#pragma region Exercícios extra

//1. Leia N valores.
//Depois peça o valor ao utilizador do tipo de dados inteiro 
// dentro do for e some os valores inseridos.
//No final mostre a soma de todos os números. (for)

//int qtd, valor, soma = 0;
//
//printf("Quantidade de valores a inserir: ");
//scanf_s("%d", &qtd); // qtd = 3
//
//// Variavel i = 0, 0 < 3; i -> 0, i -> 1,i->2, i->3, ... 
//// i = 1, 1 < 3
//// i = 2, 2 < 3
//// i = 3, 3 < 3 -> Não fez nada
//for (int i = 0; i < qtd; i++)
//{
//	printf("Digite o valor: ");
//	scanf_s("%d", &valor); // valor = 55, 5, 10
//
//	// 0 = 0 + 55
//	// 55 = 55 + 5
//	// 60 = 60 + 10
//	soma = soma + valor;
//
//	//soma = 55
//	//soma = 60
//	//soma = 70
//}
//
//printf("A soma é igual: %d ", soma);

// 2. Peça o valor.
	// Mostre todos os números pares entre 0 e o valor digitado. (for)
	// Mostre a quantidade de números pares encontrados.
//int valor, qtd = 0;
//
//printf("Digite o valor: ");
//scanf_s("%d", &valor);
//
//for (int i = 0; i <= valor; i++)
//{
//	if (i % 2 == 0)
//	{
//		printf("Numero par: %d\n", i);
//		qtd++;
//	}
//}
//
//printf("Quantidade de valores pares: %d\n", qtd);

//3. Leia os golos marcados por uma equipa num número desconhecido de jogos e, no fim, 
// mostre a média de golos por jogo(while)
	//int qtdGolos = 0, valor = 0;
	//float media = 0.0, somaGolos = 0;

	//while (valor != -1)
	//{
	//	printf("Digite o numero de golos ou -1 para terminar : ");
	//	scanf_s("%d", &valor);//5 2 2 1

	//	if (valor != -1)
	//	{
	//		somaGolos = somaGolos + valor;
	//		qtdGolos++;
	//	}
	//}

	////0  = 10 / 4 -> 2.5
	//media = somaGolos / qtdGolos;

	//printf("A media é igual: %.2f ", media);
	


//4. Leia notas até aparecer - 1. Mostre quantas foram lidas, a média, a maior e a menor. (while)


//5. Método que recebe 3 preços e devolve o mais baixo.
  
	float preco1, preco2, preco3, menorPreco;
 
 
	printf("Digite o valor: ");
	scanf_s("%f", &preco1);//5

	printf("Digite o valor: ");
	scanf_s("%f", &preco2);//5

	printf("Digite o valor: ");
	scanf_s("%f", &preco3);//5

	menorPreco = menor3Precos(preco1, preco2, preco3);

	printf("O menor preco é : %.2f ", menorPreco);


//6. Método que recebe 3 idades e devolve a mais velha.


#pragma endregion


	printf("\n");

	printf("Prima qualquer tecla...");
	printf("\n");
	_getch();

	return 0;
}
