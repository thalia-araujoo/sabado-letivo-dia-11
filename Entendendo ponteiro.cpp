#include <stdio.h>

int main(){
	int v;
	int *ptr;
	printf("\tEntendendo Ponteiros\n");
	printf("- - - - - -- - - - - - - - - - -\n");
	
	printf("Digite um valor: ");
	scanf("%d", &v);
	
	printf("Endere�o de v: %d\n", &v);
	printf("Conte�do de v: %d\n",v);
	
	ptr = &v;
	
	printf("Endere�o de ptr: %d\n", &ptr);
	printf("Conte�do de ptr: %d\n", ptr);
	
	printf("Conte�do em ptr; %d\n", *ptr);
	
	return 0;
}
