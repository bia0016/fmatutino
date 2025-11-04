#ifndef MUSICA_H
#define MUSICA_H
typedef struct item{
    char titulo[50];
    char autor[100];
    int ano;
    struct item * anterior;
    struct item * posterior;
}item;

typedef struct {
    int tamanho;
    struct item * inicio;
    struct item * fim;
}lista;

item * criarItem(char * titulo, char * autor, int ano); 
void exibirInicio(lista * l);
void exibirFim(lista * l);
void exibirAno(lista * l, int ano);

#endif
