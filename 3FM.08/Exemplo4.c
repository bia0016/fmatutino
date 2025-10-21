#include <stdio.h>
#include <stdlib.h>

typedef struct item{
    int chave;
    struct item * proximo;
}item;

int main(){
    item * i = (item *)malloc(sizeof(item));
    i->chave = 23;
    i->proximo = NULL;

    item * a = (item *)malloc(sizeof(item));
    a->chave = 17;
    a->proximo = NULL;
    item * b = (item *)malloc(sizeof(item));
    b->chave = 29;
    b->proximo = NULL;
    item * c = (item *)malloc(sizeof(item));
    c->chave = 41;
    c->proximo = NULL;
    item * d = (item *)malloc(sizeof(item));
    d->chave = 97;
    d->proximo = NULL;

    //fazer lista encadeada se usa o ponteiro '*' proximo
    a->proximo = b;
    b->proximo = c;
    c->proximo = d;
    //percorrer toda a lista (visitar todos os nós [elementos] da lista)
    printf("Lista:\n\n");
    item * x = a;
    printf("%x\t%d\n", x, x->chave);
    x = x->proximo; //do primeiro para o segundo elemento
    printf("%x\t%d\n", x, x->chave);
    x = x->proximo; //do segundo para o terceiro elemento
    printf("%x\t%d\n", x, x->chave);
    x = x->proximo; //do terceiro para o quarto e ultimo elemento
    printf("%x\t%d\n", x, x->chave); //(ultimo elemento 'd' = 97)
    x = x->proximo; //do ultimo para um elemento nulo fora da lista
    if(x == NULL){printf("final da lista\n");}
    printf("%x\t%d\n", x, x->chave); 


    printf("%d\n", x->proximo);
    printf("%d\n", a->chave);
    printf("%d\n", a->proximo->chave);
    printf("%d\n", a->proximo->proximo->chave);
    printf("%d\n", a->proximo->proximo->proximo->chave);

    printf("Endereco da memoria de i: %x\tvariavel chave: %d\tvariavel proximo (NULL): %d\n", i, i->chave, i->proximo);

    printf("Endereco da memoria de a: %x\tvariavel chave: %d\tvariavel proximo (NULL): %d\n", a, a->chave, a->proximo);
    printf("Endereco da memoria de b: %x\tvariavel chave: %d\tvariavel proximo (NULL): %d\n", b, b->chave, b->proximo);
    printf("Endereco da memoria de c: %x\tvariavel chave: %d\tvariavel proximo (NULL): %d\n", c, c->chave, c->proximo);
    printf("Endereco da memoria de d: %x\tvariavel chave: %d\tvariavel proximo (NULL): %d\n", d, d->chave, d->proximo);


    return 0;
}
