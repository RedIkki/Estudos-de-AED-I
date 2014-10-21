//Implementa��o v�lida quando h� mais de 2 pilhas no mesmo vetor. Assim as pilhas s�o distribu�das ao longo do vetor
//e � necess�rio saber gerenciar aonde est�o as outras pilhas.

/** Importante: BASE = elemento anterior ao in�cio da pilha e N�O pertence � ela. **/
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

