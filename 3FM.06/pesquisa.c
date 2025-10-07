#include <stdio.h>
#include <stdlib.h>
#define ERRO -1 //o elemento chave nao esta no vetor

int pb(int * v, int n, int chave); 
int pbr(int * v, int esquerda, int direita, int chave);

int main(){
    int numeros[] = {1, 2, 4, 5, 6, 7, 8, 10, 12, 14, 16, 18, 20, 21, 22}; //int * v
    int tamanho = sizeof(numeros) / sizeof(int); //int n 
    int elemento = 12; //int chave 
    int posicao = pb(numeros, tamanho, elemento);
    int pos = pbr(numeros, 0, 14, elemento);
    if(posicao != ERRO){ printf("A posicao eh %d.\n", posicao); }
    else{ printf("Elemento nao esta no vetor.\n"); }
    if(pos != ERRO){ printf("A posicao eh %d.\n"); }
    else{ printf("Elemento nao esta no vetor.\n"); }
    return 0;
}

int pb(int * v, int n, int chave){
    int esquerda = 0;
    int direita = n - 1;

    while(esquerda <= direita){
        int meio = (esquerda + direita) / 2;
        if(v[meio] == chave){return meio;}
        else if(v[meio] < chave){esquerda = meio + 1;}
        else{direita = meio - 1;}
    }
    return ERRO;
}

int pbr(int * v, int esquerda, int direita, int chave){
    if(esquerda > direita){ return ERRO; }
    int meio = (esquerda + direita) / 2;
    if(v[meio] == chave){ return meio; }
    else if(v[meio] < chave){ return pbr(v, meio + 1, direita, chave); }
    else{ return pbr(v, esquerda, meio - 1, chave); }
    
}
