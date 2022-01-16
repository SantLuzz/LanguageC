#include <stdio.h>
#include <stdlib.h>

//imprime números pares de um valor inicial e final informado pelo user.

int main(int argc, char *argv[]) {
	int start;
	int i;
	printf("Digite um valor minimo:");
	scanf("%d", &start);
	printf("Digite um valor maximo:");
	scanf("%d",&i);

	while(start <= i){
		if(start %2 == 0){
			printf("%d \n",start);
			
		}
			start += 1;
	}
	system("pause");
	return 0;
}