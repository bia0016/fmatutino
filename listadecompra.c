#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * lis;
    lis = fopen("lista.txt", "r");
        if(lis == NULL){
        printf("arquivo nao foi aberto\n");
        exit(1);
    }
    char produto[50];
    int qtd;
    float preco;
    char str[1000];
    
    while(fscanf(lis, "%[^\n] %d %f", produto, qtd, preco) != EOF){
        sprintf(str, "%d) %s - %d x %.2f = %.2f\n", i, produto, qtd, preco, qtd * preco);
    }
    printf("arquivo aberto com sucesso\n");
    fclose(lis);

    FILE * out;
    out = fopen("lista.txt", "a");
        if(out == NULL){
        printf("arquivo nao foi aberto\n");
        exit(1);
    }

    fprintf(out, "%s", str);

    return 0;
}