#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int chave;
    //no caso de arvore com grau 3
    struct no * esquerdo; //1 filho
    struct no * direito; //2 filho
}no;

no * criarNo(int chave){
    no * n = (no *)malloc(sizeof(no));
    if(n = NULL){
        printf("ERRO: nao ha memoria para o No.\n");
        return NULL;
    }
    n->chave = chave;
    n->esquerdo = NULL;
    n->direito = NULL;
}

int contarNos(no * n){
    if(n == NULL){return 0;}
    return 1 + contarNos(n->direito)+(n->esquerdo);
}

/*int main(){
    no * a = criarNo(10);
    no * b = criarNo(12);
    no * c = criarNo(15);
    no * d = criarNo(16);
    no * e = criarNo(18);
    no * f = criarNo(20);
    no * g = criarNo(17);
    no * h = criarNo(19);
    
    a->esquerdo = b;
    a->direito = c;
    c->direito = d;
    d->direito = f;
    f->esquerdo = g;
    f->direito = h;

    printf("%c\n", a->direito->direito->chave);
}*/

int main(){
    //no raiz nivel 1
    no * raiz = criarNo(10);
    //nos nivel 2
    raiz->esquerdo = criarNo(12);
    raiz->direito = criarNo(15);
    //nos nivel 3
    raiz->esquerdo->esquerdo = criarNo(16);
    raiz->esquerdo->direito = criarNo(18);
    raiz->direito->direito = criarNo(20);
    //nos nivel 4
    raiz->direito->direito->esquerdo = criarNo(17);
    raiz->direito->direito->direito = criarNo(19);
}
