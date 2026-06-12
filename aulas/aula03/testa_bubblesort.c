#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "ordenacao.h"

#define TAMANHO 10

int main(){

    
    int vetor[TAMANHO] = {5, 11, 4, 1, 17, 8, 6, 47, 51, 2};

    printf("Vetor antes de ordenar\n");
    imprimir_vetor(vetor, TAMANHO);

    clock_t inicio = clock();
    bubble_sort(vetor, TAMANHO);
    clock_t termino = clock();

    duracao = (double)(termino - inicio)/CLOCKS_PER_SEC;

    printf("vetor depois da ordenacao\n");
    imprimir_vetor(vetor, TAMANHO);

    return 0;
}

