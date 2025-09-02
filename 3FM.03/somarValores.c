#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 200000
int main(){
    int soma = 0;
    srand(time(NULL));
    clock_t T0 = clock();
    for(int i = 0; i < tam; i++){ 
        int tempo = (rand() % 1000);
        printf("%d\n", tempo);
        soma = soma + tempo;    
    }
    clock_t TF = clock();
    double tempoCPU = (double)(TF - T0) / CLOCKS_PER_SEC;
    printf("Tempo de CPU: %.3f segundos\n", tempoCPU);
    printf("Soma: %d\n", soma);
    return 0;
}