#include<stdio.h>
#include<stdlib.h>
#include "estrutura.h"
/*struct estrutura{
    void *ponteiro;
    int elemento;

};
typedef struct estrutura est;*/

est* funcao(int n){
    est* vetor = malloc(sizeof(est));

    vetor -> elemento = n;
    vetor -> ponteiro = malloc(vetor->elemento);

    return vetor;

}

