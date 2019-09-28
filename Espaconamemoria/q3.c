#include<stdio.h>
#include<stdlib.h>
#include "estrutura.h"
/*struct estrutura{
    void *ponteiro;
    int elemento;

};
typedef struct estrutura est;*/

est* funcao3(est* inicio){
    free(inicio -> ponteiro);
    inicio -> elemento = 0;

    return inicio;

}
