#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Progrma que joga 3 dados aleatórios e exibe o resultado da soma dos 3 valores gerados na tela

int main(int argc, char *argv[]) {
	//usando o tempo da minha maquina como semente
	srand(time(NULL));
	printf("Jogaremos 3 d6 e somaremos os valores \n");
	//valores minimos e maximos dos dados a serem gerados
	int min = 1;
	int max = 6;
	int a, b, c, soma;
	
	a = rand() % (max - min + 1) + min;
	b = rand() % (max - min + 1) + min;
	c = rand() % (max - min + 1) + min;
	soma = a + b + c;
	printf ("Os Numeros gerados sao: %d, %d e %d \nSua soma e: %d",a,b,c,soma);

	system("pause");
	return 0;
}