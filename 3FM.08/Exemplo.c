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
    printf("Endereco da memoria de i: %d\n", i);
    printf("%d\n", i->chave);
    printf("%d (NULL)\n", i->proximo);
    return 0;
}
