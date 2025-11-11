#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "pilha.h"

int main(){
    system("cls");

    item * i1 = criarItem(30);
    item * i2 = criarItem(26);
    item * i3 = criarItem(12);
    item * i4 = criarItem(9);
    item * i5 = criarItem(5);
    item * i6 = criarItem(10);
    item * i7 = criarItem(27);

    pilha * minhaPilha = criarPilha();
    printf("endereco da pilha: %x\n", minhaPilha);
    printf("\n");

    empilhar(minhaPilha, i1);
    empilhar(minhaPilha, i2);
    empilhar(minhaPilha, i3);
    empilhar(minhaPilha, i4);
    empilhar(minhaPilha, i5);
    empilhar(minhaPilha, i6);
    empilhar(minhaPilha, i7);

    printf("%d\n", minhaPilha->topo); //mostra o endereço de memoria
    printf("%d\n", minhaPilha->topo->chave); //mostra o valor da variavel

    desempilhar(minhaPilha);
    printf("%d\t%d", minhaPilha->topo->chave, minhaPilha->tamanho);
    /*system("gcc teste.c -o teste.exe");
    system("teste.exe");*/
}