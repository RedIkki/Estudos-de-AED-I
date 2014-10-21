//Implementação válida quando há mais de 2 pilhas no mesmo vetor. Assim as pilhas são distribuídas ao longo do vetor
//e é necessário saber gerenciar aonde estão as outras pilhas.

/** Importante: BASE = elemento anterior ao início da pilha e NÃO pertence à ela. **/
#define np 3;
typedef struct {
    int a[MAX];
    int topo[np+1];
    int base[np+1];
}MPilhas;

void inicializarMPilha(MPilhas* pi){
    int i;
    for(i=0; i<=np;i++){
        pi->topo[i] = (i*(MAX/np)-1);
        pi->base[i] = pi->topo[i];
    }
}

bool pilhaKEhVazia(MPilhas* pi, int k){
    return (pi->base[k] == pi->topo[k]);
}

