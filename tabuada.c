#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    FILE * mul;
    mul = fopen("tabuada.txt", "a");
    if(mul == NULL){
        printf("arquivo nao aberto");
        exit(1);
    }
    for(int i = 0; i < 11; i++){ 
        fprintf(mul, "7 x %d = %d\n", i, 7 * i);
    }
    fprintf(mul, "\n");
    for(int i = 0; i < 11; i++){ 
        fprintf(mul, "9 x %d = %d\n", i, 9 * i);
    }
    printf("arquivo foi aberto/criado\n");
    fclose(mul);
    return 0;
}