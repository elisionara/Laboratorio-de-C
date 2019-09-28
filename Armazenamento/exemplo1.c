#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,i;
	printf("Digite um numero:\n");
	scanf("%d", &n);

	int* vec, *aux, *end;
	vec = calloc(n, sizeof(int));
	aux = vec;
	
	while(aux < end){
		++(*aux) = rand;
	}

	return 0;
}
