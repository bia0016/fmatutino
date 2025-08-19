#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * fp; //fp é um ponteiro para arquivo; ponteiro é uma variavel que guarda endereço de memoria
    printf("%d %x\n", fp, fp); //%x mostrará o endereço apontado por fp
    fp = fopen("bd.txt", "r"); //abre o arquivo com fopen com r que lê
    if(fp == NULL){
        printf("arquivo nao foi aberto");
        exit(1);
    }
    int conta;
    float saldo;
    char nome[50];
    for(int i = 0; i < 5; i++){
        fscanf(fp, "%d %f %[^\n]\n", &conta, &saldo, nome); //%[^\n] lê até encontrar a quebra de linha (\n)
        printf("%d\t%.2f\t%s\n", conta, saldo, nome);
    }
    fclose(fp);
    return 0;
}
