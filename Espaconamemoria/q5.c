#include<stdio.h>
#include<stdlib.h>
#include "estrutura.h"
/*struct estrutura{
    void *ponteiro;
    int elemento;

};
typedef struct estrutura est;*/

est* funcao5(est** inicio, int n){
    int i;

    for(i = 0;i < n;i++){
        free(inicio[i] -> ponteiro);

    }

    free(inicio)

    return 0;

}


