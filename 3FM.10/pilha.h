#ifndef PILHA_H
#define PILHA_H 

typedef struct item{
    int chave;
    struct item * anterior;
}item;

typedef struct pilha{
    int tamanho;
    item * topo;
}pilha;

item * criarItem(int chave);
pilha * criarPilha();
void empilhar(pilha * p, item * i);
void desempilhar(pilha * p);

#endif