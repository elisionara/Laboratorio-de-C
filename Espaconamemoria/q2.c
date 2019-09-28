#include<stdio.h>
#include<stdlib.h>
#include "estrutura.h"

/*struct estrutura{
    void *ponteiro;
    int elemento;

};
typedef struct estrutura est;*/
est* funcao2(est* inicio, int n){
     if(n > inicio -> elemento){
        inicio -> ponteiro = realloc(inicio -> ponteiro, n);

     }

    return inicio;

}
