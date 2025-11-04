#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "musica.h"

int main(){
    item * D = criarItem("Aquarela", "Toquinho", 1983);
    item * E = criarItem("Romaria", "Renato Texeira", 1978);
    item * F = criarItem("Eu nasci há 10 mil anos atrás", "Raul Seixas", 1976);
    item * G = criarItem("Calice", "Chico Buarque e Gilberto Gil", 1978);
    item * H = criarItem("Tempo Perdido", "Renato Russo", 1986);

    //construindo o encadeamento de D, E, F, G, H
    D->anterior = NULL;
    D->posterior = E;
    E->anterior = D;
    E->posterior = F;
    F->anterior = E;
    F->posterior = G;
    G->anterior = F;
    G->posterior = H;
    H->anterior = G;
    H->posterior = NULL;

    //criando uma lista
    lista * playlist = (lista *) malloc(sizeof(lista));
    if(playlist == NULL){exit(1);}
    playlist->tamanho = 5;
    playlist->inicio = D;
    playlist->fim = H;

    exibirInicio(playlist);
    exibirFim(playlist);
    exibirAno(playlist, 1978);
} 