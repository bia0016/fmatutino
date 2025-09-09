#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 5000
void insertionSort(int * v, int n);
void exibirVetor(int * v, int n);
int main(){
    int conj[tam];
    srand(time(NULL));
    for(int i = 0; i < tam; i++){
        conj[i] = rand() % 1000;
    }
    clock_t T0 = clock();
    insertionSort(conj, tam);
    clock_t TF = clock();
    printf("Tempo de CPU : %f\n", (double)(TF - T0)/CLOCKS_PER_SEC);
    exibirVetor(conj, tam);

    return 0;
}

void insertionSort(int * v, int n){
    int chave; // elemento que sera inserido na parte ordenada
    int i; //posicao (ou coordenada) do elemento chave
    int j; //posicao do elemento da "parte ordenada" que sera comparada com chave
    for(i = 1; i < n; i++){
        chave = v[i];
        j = i - 1;
        while(j >= 0 && v[j] > chave){
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = chave; //copiado o chave no ultimo lugar modificado
        exibirVetor(v, n);
    }
}
void exibirVetor(int * v, int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", v[i]);
    }
    printf("\n");
}