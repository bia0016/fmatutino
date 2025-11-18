#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char chave;
    //no caso de arvore com grau 3
    struct no * f1; //1 filho
    struct no * f2; //2 filho
    struct no * f3; //3 filho
    struct no * f[3];
}no;

no * criarNo(char chave){
    no * n = (no *)malloc(sizeof(no));
    if(n = NULL){
        printf("ERRO: nao ha memoria para o No.\n");
        return NULL;
    }
    n->chave = chave;
    n->f1 = NULL;
    n->f2 = NULL;
    n->f3 = NULL;
    for(int i = 0; i < 3; i++){n->f[i] = NULL;}
}
