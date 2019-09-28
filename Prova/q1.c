#include<stdio.h>

int main(){
    int k;
    int i, pot, base;
    int pmerse;

    base = 2;
    pot = 1;

    printf("Informe o k:\n");
    scanf("%d", &k);

    if(k <= 0 || k == 1){
        printf("nao faz parte da sequencia de mersenne\n");

    }else if(k > 0 && k > 1){
        for(i = 0;i != k;i++){
            pot = pot * base;

        }

        pmerse = pot - 1;
        printf("M%d = %d\n", k, pmerse);

    }

    return 0;

}
