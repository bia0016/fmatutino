#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE * lp;
    lp = fopen("teste1.txt", "a");
    if(lp == NULL){
        printf("arquivo nao foi aberto");
        exit(1);
    }
    fprintf(lp, ":P");
    printf("arquivo foi aberto\n");
    fclose(lp);
    return 0;
}
