#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char chave;
    //no caso de arvore com grau 3
    struct no * esquerdo; //1 filho
    struct no * direito; //2 filho
}no;

no * criarNo(char chave){
    no * n = (no *)malloc(sizeof(no));
    if(n = NULL){
        printf("ERRO: nao ha memoria para o No.\n");
        return NULL;
    }
    n->chave = chave;
    n->esquerdo = NULL;
    n->direito = NULL;
}

int main(){
    no * a = criarNo('a');
    no * b = criarNo('b');
    no * c = criarNo('c');
    no * d = criarNo('d');
    
    a->esquerdo = b;
    a->direito = c;
    c->direito = d;

    printf("%c\n", a->direito->direito->chave);
}
