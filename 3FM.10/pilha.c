#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"

item * criarItem(int chave){
    item * i = (item *)malloc(sizeof(item));
    if(i == NULL){
        printf("Erro: nao foi possivel alocar memoria para o item\n");
        return NULL;
    }
    i->chave = chave;
    i->anterior = NULL;
    return i;
}
pilha * criarPilha(){
    pilha * p = (pilha *)malloc(sizeof(pilha));
    if(p == NULL){
        printf("Erro: nao foi possivel alocar memoria para a pilha\n");
        return NULL;
    }
    p->tamanho = 0;
    p->topo = NULL;
    return p;
}
void empilhar(pilha * p, item * i){
    i->anterior = p->topo;
    p->topo = i;
    p->tamanho++;
}
void desempilhar(pilha * p){
    if(p->tamanho == 0){
        printf("erro: a pilha esta vazia\n");
        return ;
    }
    item * i = p->topo;
    p->topo = i->anterior;
    free(i);
    p->tamanho--;

    /*
    p->topo = i->interior;
    i->interior = p;
    p->tamanho--;
    */
}
