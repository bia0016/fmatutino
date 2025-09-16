#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void trocarElemento(int * a, int * b);
int particao(int * v, int inf, int sup);
void quickSort(int * v, int inf, int sup);
void exibirVetor(int * v, int n);

int main (){
    int vetor[]={3, 6, 4, 5, 1, 7, 2};
    int tamanho = sizeof(vetor) / sizeof(int);
    particao(vetor, 0, tamanho - 1);
    quickSort(vetor, 0, tamanho - 1);
    exibirVetor(vetor, tamanho);
    return 0;
}

void trocarElemento (int * a, int * b){
    //Obs.: a e b sao ponteiros (guardam enderecos de memoria)    
    printf("%d\t %d \n", *a, *b);
    int temp = *a; //temp recebe o valor apontado por A
    *a = *b; //o valor apontado por A passa a ser o valor apontado B
    *b = temp; //o valor apontado por B recebe o valor de temp
}
int particao(int * v, int inf, int sup){
    int pivot = v[(inf + sup) / 2];
    int i = inf;
    int j = sup;
    while(i <= j){
        while(v[i] < pivot){
            i++;
        }
        while(v[j] > pivot){
            j--;
        }
        if(i <= j){
            trocarElemento(&v[i], &v[j]);
            i++;
            j--;
        }
    }
    for(int p = 0; p < i; p++){
        printf("%d\t", v[i]);
    }
    //printf("\n[%d]\n", v[i]);
    /*for(int q = i; q <= sup; q++){
        printf("%d\t", v[q]);
    }*/
    return i;
} 
void quickSort(int * v, int inf, int sup){
    if(inf < sup){
        int p = particao(v, inf, sup);
        quickSort(v, inf, p - 1);
        quickSort(v, p, sup);
    }
}
void exibirVetor(int * v, int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", v[i]);
        printf("\n");
    }
}