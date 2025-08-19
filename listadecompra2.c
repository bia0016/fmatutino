#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * lis;
    lis = fopen("lista2.txt", "a");
    if(lis == NULL){
        printf("arquivo nao foi aberto\n");
        exit(1);
    }
    char produto[50];
    int qtd;
    float preco;
    while(fscanf(lis, "%[^\n] %d %f", produto, qtd, preco) == EOF){
        for(int i = 0; i < EOF; i++){
            fprintf(lis, "%d) %s - %d x %.2f = %.2f", i, produto, qtd, preco, qtd * preco);
        }
    }
    printf("arquivo aberto com sucesso\n");
    fclose(lis);
    return 0;
}