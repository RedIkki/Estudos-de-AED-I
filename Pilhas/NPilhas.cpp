//Nestas definições foi utilizado N = 2; Logo o vetor se divide em 2 pilhas, umas começando de cada lado. Por isso em uma
//ele faz ++ e na outra ele faz --. Porque cada uma avança na direção oposta da outra.

typedef struct{
    int a[MAX];
    int topo1;
    int topo2;
}NPilhas;

void inicializarNPilha(NPilhas* pi){
    pi->topo1 = -1;
    pi->topo2 = -1;
}

bool pilhaCheia(NPilhas* pi){
    if(pi->topo2 == ((pi->topo)+1))
}

bool pilhaKVazia(NPilhas* pi, int k){
    if (k==1) return (pi->topo1 = -1);
    else return (pi->topo2 = -1);
}

bool pushK(NPilhas* pi, int ch, int k){
    if(pilhaCheia((pi)) return false;
    if(k==1){
        pi->topo1++;
        pi->a[pi->topo1]= ch;
    } else {
        pi->topo2--;
        pi->a[pi->topo2] = ch;
    }
    return true;
}

int popK(NPilhas* pi, int k){
    int resp = -1;
    if (pilhaKVazia(pi,k)) return resp;
    if(k==1){
        resp = pi->a[pi->topo1];
        pi->topo--;
    } else{
        resp = pi->a[pi->topo2];
        p2->topo++;
    }
    return resp;
}
