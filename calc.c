#include <stdio.h>
#include <stdlib.h>

//programa de calculadora que mostre a opção de somar e subtrair pro usar usando dois inteiros.
// Implementar um laço de repetição While no programa.

int main(int argc, char *argv[]) {
	float a, b, resultado;
	int calc;
	printf("Caluladora \n");
	printf("Insira um numero: ");
	scanf ("%f",&a);
	printf("Insira outro numero: ");
	scanf("%f", &b);
	printf("Escolha a operacao \n");
	printf("1 - soma \n");
	printf("2 - subtracao \n");
	scanf("%d", &calc);
	switch(calc){
		case 1:
			resultado = a + b;
			break;
		case 2:
			resultado = a - b;
			break;
		default:
			printf("Selecione uma opcao valida!");
			break;
 	}
 	printf("Resultado: %.3f",resultado);
	return 0;
}