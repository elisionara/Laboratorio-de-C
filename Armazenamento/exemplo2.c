#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, m, i, j, init, end, mid, aux;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	printf("Digite um numero:\n");
	scanf("%d", &m);

	int* vec;
	vec = calloc(n, sizeof(int));

	for(i= 0 ; i < n; i++){
		vec[i] = rand()%100;
		printf("%d \n", vec[i]);
	}

	
	for(i= 0 ; i < n; i++){
		for(j = i+1; j < n; j++){
			if(vec[j-1] > vec[j]){
				aux = vec[j-1];
				vec[j-1] = vec[j];
				vec[j] = aux; 
			}
		}
	}

	for(i= 0 ; i < n; i++){
		printf("%d \n", vec[i]);
	}

	init = 0; 
	end = n;
	while(init < end){
		printf("init = %d end = %d \n", init, end);
		mid = (init + end)/2;
		printf("mid = %d \n", mid);
		getchar();
	
		if(init == end +1){
			if(vec[init] == m) mid = init;
			if(vec[end] == m) mid = end;
			init = end;
			break;
		}		

		if(vec[mid] == m) break;
		else if(vec[mid] > m){
			end = mid;
		}else{
			init = mid;
		}
	}

	if(vec[mid] != m) printf("NAO!\n");
	else printf("SIM = %d\n", mid);

	return 0;
}
