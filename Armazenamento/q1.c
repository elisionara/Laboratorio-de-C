#include <stdio.h>
#include <stdlib.h>

int cont1[100];
int cont2;

void subconjunto(int i, int n){

    int j;

    if(i > n){
        printf("%d subconjunto:", cont2++);

    for(j = 1; j <= n;j++)
        if(cont1[j] == 1)
            printf("%d ", j);
            printf("\n");

        }else{
            cont1[i] = 1;
            subconjunto(i + 1, n);
            cont1[i] = 0;
            subconjunto(i + 1, n);

        }

}

int main(){

    int n;

    scanf("%d", &n);
    cont2 = 0;

    subconjunto(1, n);

    return 0;

}
