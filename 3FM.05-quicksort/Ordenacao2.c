#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 500

void trocarElemento(int * a, int * b);
int particao(int * v, int inf, int sup);
void quickSort(int * v, int inf, int sup);
void exibirVetor(int * v, int n);

int main (){
    int conj[tam];
    for(int i = 0; i < tam; i++){
        conj[i] = rand()%1000;
    }
    clock_t T0 = clock();
    quickSort(conj, 0, tam - 1);
    clock_t TF = clock();
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