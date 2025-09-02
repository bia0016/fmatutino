//implementar todas as funçoes do TAD EQUIPE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "equipe.h"
int getPontos(equipe * t, int posicao);
float getAproveitamento(equipe * t, char * nome);
equipe * LerDados(char * Arquivo){
    printf("Arquivo a ser aberto: %s\n", Arquivo);
    equipe * x = malloc(20 * sizeof(equipe));
    if(x == NULL){
        printf("ERRO: memoria insuficiente!\n");
        exit(1);
    }
    FILE * fp = fopen(Arquivo, "r");
    if(fp == NULL){
        printf("ERRO: arquivo nao pode ser aberto!\n");
        exit(1);
    }
    int i = 0;
    char cabecalho[100];
    fscanf(fp, "%s", cabecalho);
    while (fscanf(fp, "%d;%[^;];%[^;];%d;%d;%d;%d;%d;%d;%d;%d\n", 
    &x[i].pos, x[i].estado, x[i].time, &x[i].pts, &x[i].j, &x[i].v, 
    &x[i].e, &x[i].d, &x[i].gp, &x[i].gc, &x[i].sg) == 11){
        printf("%s\n", x[i].time);
        x[i].aproveitamento = (float) 100 * x[i].pts / (3 * x[i].j);
        i++;
    }
    
    fclose(fp);
    return x;
}
int getPontos(equipe * t, int posicao){
    for(int i = 0; i < 20; i++){
        if(t[i].pos == posicao){
            return t[i].pts;
        }
    }
    return ERRO;
}
float getAproveitamento(equipe * t, char * nome){ //* é um vetor, portanto char é um vetor de caracteres =P
    for(int i = 0; i < 20; i++){
        if(strcmp(t[i].time, nome) == 0){
            return t[i].aproveitamento;
        }
    }
    return ERRO;
}