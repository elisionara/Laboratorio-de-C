#include<stdio.h>
#include<locale.h>

int main(){
    int n;
    int soma = 0;
    int div;

    setlocale(LC_ALL, "portuguese");

    printf("Informe um numero:\n");
    scanf("%d", &n);

    for(div = 1;div < n;div++){
        if(n % div == 0){
            soma = soma + div;

        }
    }

    if(n == soma){
        printf("SIM\n");

    }else{
        printf("NÃO\n");

    }

    return 0;

}
