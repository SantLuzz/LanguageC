#include <stdio.h>
#include <stdlib.h>

//tabuada de um número informado pelo o usuario

int main(int argc, char *argv[]) {
	int i;
	int multiply; //Tabuada desejada
	int limit; //até qual numero quer imprimir
	printf("Insira qual tabuada deseja ver: ");
	scanf("%d",&multiply);
	printf("Insira o limite da tabuada escolhida: ");
	scanf("%d",&limit);
	for(i=0;i<=limit;i++){
		int table = i * multiply;
		printf("%d X %d = %d \n",multiply,i,table);
	}
	return 0;
}