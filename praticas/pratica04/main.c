#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"

#define TAM 100

// função pra copiar vetor
void copiar_vetor(int origem[], int destino[], int n){
    for(int i = 0; i < n; i++){
        destino[i] = origem[i];
    }
}

int main() {
    int v[TAM], v1[TAM], v2[TAM], v3[TAM];

    srand(time(NULL));

    // gerar números aleatórios
    for(int i = 0; i < TAM; i++){
        v[i] = rand() % 1000;
    }

    // copiar para cada algoritmo
    copiar_vetor(v, v1, TAM);
    copiar_vetor(v, v2, TAM);
    copiar_vetor(v, v3, TAM);

    clock_t inicio, fim;

    //  Bubble Sort
    inicio = clock();
    bubble_sort(v1, TAM);
    fim = clock();
    imprimir_vetor(v1, TAM);

    printf("Tempo Bubble Sort: %f segundos\n", 
           (double)(fim - inicio) / CLOCKS_PER_SEC);

    //  Selection Sort
    inicio = clock();
    selection_sort(v2, TAM);
    fim = clock();
    imprimir_vetor(v2, TAM);
    printf("Tempo Selection Sort: %f segundos\n", 
           (double)(fim - inicio) / CLOCKS_PER_SEC);

    //  Quick Sort
    inicio = clock();
    quick_sort(v3, 0, TAM - 1);
    fim = clock();
    imprimir_vetor(v3, TAM);
    printf("Tempo Quick Sort: %f segundos\n", 
           (double)(fim - inicio) / CLOCKS_PER_SEC);

    return 0;
}