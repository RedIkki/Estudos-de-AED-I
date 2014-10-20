#include <stdlib.h>
#include <stidio.h>
define MAX 30;

typedef struct {
    int a[MAX];
    int topo;
}Pilha_Est;

void inicializarPilhaEst(Pilha_Est* pi){
    pi->topo = -1;
}

int tamanho(Pilha_Est* pi){
    return (pi->topo)+1);
}
