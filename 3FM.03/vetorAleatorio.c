#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 4000
int main(){
    int v[tam];
    srand(time(NULL));
    for(int i = 0; i < tam; i++){ v[i] = rand();}
    clock_t T0 = clock();
    for(int i = 0; i < tam; i++){ printf("%d\t", v[i]);}
    clock_t TF = clock();
    double tempoCPU = (double)(TF - T0) / CLOCKS_PER_SEC;
    printf("Tempo de CPU: %.3f segundos\n", tempoCPU);
    return 0;
}