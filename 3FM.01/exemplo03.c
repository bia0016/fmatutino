#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * fp; //fp é um ponteiro para arquivo; ponteiro é uma variavel que guarda endereço de memoria
    printf("%d %x\n", fp, fp); //%x mostrará o endereço apontado por fp
    fp = fopen("teste.txt", "a"); //abre o arquivo com fopen com a que add
    if(fp == NULL){
        printf("arquivo nao foi aberto");
        exit(1);
    }
    fprintf(fp, "tomara que o curso acabe logo\n");
    printf("arquivo aberto/criado!\n");
    fclose(fp);

    return 0;
}
