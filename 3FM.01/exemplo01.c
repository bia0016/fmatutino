#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * fp; //fp é um ponteiro para arquivo; ponteiro é uma variavel que guarda endereço de memoria
    printf("%d %x\n", fp, fp); //%x mostrará o endereço apontado por fp
    fp = fopen("teste.txt", "w"); //abre o arquivo com fopen com w que sobrescreve
    if(fp == NULL){
        printf("arquivo nao foi aberto");
        exit(1);
    }
    printf("arquivo aberto/criado!\n");
    fclose(fp);
    return 0;
}
