#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void insertionSort(int * v, int n);
void exibirVetor(int * v, int n);
int main(){
    int conj[] = {1, 9, 7, 8, 5, 2};
    int size = sizeof(conj)/sizeof(int);

    insertionSort(conj, size);
    printf("Vetor ordenado: \n");
    exibirVetor(conj, size);

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