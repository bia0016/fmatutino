#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "equipe.h"
int main(){
    equipe * tabela = LerDados("tabela.csv");
    printf("%d\n", getPontos(tabela, 20));
    printf("%.2f%%\n", getAproveitamento(tabela, "palmeiras"));
    printf("\n");
    printf("\n");
    for(int i = 0; i < 20; i++){
        printf("%d\t%.2f%%\t%s\n", tabela[i].pos, tabela[i].aproveitamento, tabela[i].time);
    }
    return 0;
}