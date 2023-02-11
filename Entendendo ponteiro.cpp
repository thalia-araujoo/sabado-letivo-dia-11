#include <stdio.h>

int main(){
	int v;
	int *ptr;
	printf("\tEntendendo Ponteiros\n");
	printf("- - - - - -- - - - - - - - - - -\n");
	
	printf("Digite um valor: ");
	scanf("%d", &v);
	
	printf("Endereço de v: %d\n", &v);
	printf("Conteúdo de v: %d\n",v);
	
	ptr = &v;
	
	printf("Endereço de ptr: %d\n", &ptr);
	printf("Conteúdo de ptr: %d\n", ptr);
	
	printf("Conteúdo em ptr; %d\n", *ptr);
	
	return 0;
}
