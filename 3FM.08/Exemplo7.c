#include <stdio.h>
#include <stdlib.h>
#define tam 15

typedef struct item{
    int chave;
    struct item * proximo;
}item;

item * criarItem(int chave);
void exibirLista(item * inicio); //para lista nao circular 
void inserirItem(item * inicio, item * I, int posicao);
void excluirItem(item * inicio, int posicao);

int main(){
    item * a = criarItem(17);
    item * b = criarItem(29);
    item * c = criarItem(41);
    item * d = criarItem(97);
    item * p = criarItem(67);

    //fazer lista encadeada circular = a -> b -> c -> d -> a -> b -> ... infinitamente
    a->proximo = b;
    b->proximo = c;
    c->proximo = p;
    p->proximo = d;
    d->proximo = a; //depois do ultimo esta o primeiro elemento (transformando a lista numa lista circular)
    exibirLista(a);

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

    for(int i = 0; i < tam; i++, x = x->proximo){
        printf("%x\t%d\n", x, x->chave);  
    }

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
    //inserir o item p, cuja a chave é 67, logo após C.

    return 0;
}

item * criarItem(int chave){
    item * x = (item *)malloc(sizeof(item));
    x->chave = chave;
    x->proximo = NULL;
    return x;
}
void exibirLista(item * inicio){
    item * x = inicio;
    for(int i = 0; x != NULL; i++, x = x->proximo){printf("variavel chave: %d\n", x->chave);}
}
/*void inserirLista(item * inicio, item * I, int posicao){
    item * I = (item *)malloc(sizeof(item));
    int posicao = 0;
    item * x = inicio;
}*/
void excluirItem(item * inicio, int posicao){
    int posicao = 0;
    item * x = inicio;
    x->proximo;
    free(posicao);
    exibirLista(inicio);
}

//depois LISTA DUPLAMENTE ENCADEADA"