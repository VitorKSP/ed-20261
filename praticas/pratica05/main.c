#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "selecao.h"

#define N 100

int main() {
    int v[N], v1[N], v2[N];
    int k = N / 2; // exemplo: pegar o elemento do meio (mediana aproximada)

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Gera o vetor com números aleatórios
    for (int i = 0; i < N; i++) {
        v[i] = rand() % 1000; // números entre 0 e 999
    }

    // Copia o vetor para usar nos dois algoritmos
    for (int i = 0; i < N; i++) {
        v1[i] = v[i];
        v2[i] = v[i];
    }

    clock_t inicio, fim;
    double tempo;

    // ===== Linear Search =====
    inicio = clock();
    int resultado1 = linearSearch(v1, N, k);
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Linear Search:\n");
    printf("Elemento na posicao %d: %d\n", k, resultado1);
    printf("Tempo: %f segundos\n\n", tempo);

    // ===== Quick Select =====
    inicio = clock();
    int resultado2 = quickSelect(v2, 0, N - 1, k + 1); // +1 porque é baseado em 1
    fim = clock();

    tempo = (double)(fim - inicio) / CLOCKS_PER_SEC;

    printf("Quick Select:\n");
    printf("Elemento na posicao %d: %d\n", k, resultado2);
    printf("Tempo: %f segundos\n", tempo);

    return 0;
}
