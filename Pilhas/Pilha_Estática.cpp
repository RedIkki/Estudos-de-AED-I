#include <stdlib.h>
#include <stdio.h>
#define MAX 50;

typedef struct aux {
    int chave;
    aux* prox;
}NO;

typedef struct {
    NO* topo = NULL;
}Pilha;

void inicializarPilha(Pilha* p){
    p->topo = NULL;
}

//Lembrando que: pilhas só permitem inserção no topo !
bool push(Pilha* pi,int ch ){
    NO* novo = (NO*)malloc(sizeof(NO));
    if(!novo) return false;
    novo->chave = ch;
    novo->prox = pi->topo;
    pi->topo = novo;
    return true;
}

//Lembrando que: pilhas só permitem "saídas", também, no topo !
int pop(Pilha* pi){
    int resp = -1;
    if(pi->topo){
        resp = pi->topo->chave;
        NO* salvo = pi->topo->prox;
        free(pi->topo);
        pi->topo = salvo;
    }
    return resp;
}

void imprimirPilha(Pilha* pi){
    NO* aux = pi->topo;
    int i = 1;
    while(aux){
        printf("%do:%d | ",i,aux->chave);
        i++;
        aux = aux->prox;
    }
}

int main(){
    Pilha l;
    inicializarPilha(&l);
    push(&l,3);
    push(&l,2);
    push(&l,1);
    imprimirPilha(&l);
}
