#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "musica.h" //ultimo conteudo: arvore binaria

item * criarItem(char * titulo, char * autor, int ano){
    item * x = (item*)malloc(sizeof(item));
    if(x == NULL){
        printf("erro: nao foi possivel para o item\n");
        return NULL;
    }
    strcpy(x-> titulo, titulo);
    strcpy(x-> autor, autor);
    x->ano = ano;
    x-> anterior = NULL;
    x-> posterior = NULL;
    return x;
}
void exibirInicio(lista * l){
    item * atual = l->inicio;
    for(int i = 0; i < l->tamanho; i++){
        printf("%d\t%s\n", i, atual->titulo);
        atual = atual->posterior;
    }
    printf("\n");
}
void exibirFim(lista * l){
    item * atual = l->fim;
    for(int i = 0; i < l->tamanho; i++){
        printf("%d\t%s\n", i, atual->titulo);
        atual = atual->anterior;
    }
    printf("\n");
}

void exibirAno(lista * l, int ano){
    item * atual = l->inicio;
    for(int i = 0; i < l->tamanho; i++){
        if(atual->ano == ano){
            printf("%d\t%s\n", i, atual->titulo);
            atual = atual->posterior;
        }
    }
    printf("\n");
}