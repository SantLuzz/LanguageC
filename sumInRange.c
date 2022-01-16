#include <stdio.h>
#include <stdlib.h>

//programa que mostra a a soma de dois numeros entre 5 e 10, apenas quando ambos estão no intervalo.
//digitar dois valores
//somar eles
//mostrar a soma quando estiver entre 5 e 10 (start = 5 e maximum = 10)

int main(int argc, char *argv[]) {
	int i = 5;
	int maximum = 10;
	int a, b, sum;
	do{
		printf("Insira um inteiro entre 1 e 5:");
		scanf("%d", &a);
		printf("Insira um inteiro entre 1 e 5:");
		scanf("%d",&b);
		sum = a + b;
		printf("O resultado e: %d \n",sum);
	}while(sum < i || sum > maximum);
	
	system("pause");
	
	return 0;
}