#include <stdio.h>
#include <stdlib.h>

int* quantNotas(int saque){
    int notas[] = {200, 100, 50, 20, 10, 5, 2};
    int *qtd = malloc(7 * sizeof(int));

    if(saque > 1000){
        for(int i = 0; i < 7; i++){
            qtd[i] = 0;
        }
        return qtd;
    }
    for(int i = 0; i < 7; i++){
        qtd[i] = saque / notas[i];
        saque %= notas[i];
    }

    return qtd;
}

int Cedulas(int qtd[], int esperado[]){
    for(int i = 0; i < 7; i++){
        if(qtd[i] != esperado[i]){
            return 0;
        }
    }
    return 1;
}

void imprimeCedulas(int qtd[], int notas[]){
    for(int i = 0; i < 7; i++){
        if(qtd[i] > 0){
            printf("%d cedulas de %d\n", qtd[i], notas[i]);
        }
    }
}

int main(){
    int notas[] = {200, 100, 50, 20, 10, 5, 2};
    int *qtd = quantNotas(0);

    int resultado1[] = {2, 0, 1, 0, 0, 0, 0};
    qtd = quantNotas(450);

    printf("Saque = 450, Quant. cedulas:\n");
    imprimeCedulas(qtd, notas);
    printf("=> %i\n\n", Cedulas(qtd, resultado1));
    free(qtd);

    int resultado2[] = {4, 0, 1, 1, 0, 1, 0};
    qtd = quantNotas(875);

    printf("Saque = 875, Quant. cedulas:\n");
    imprimeCedulas(qtd, notas);
    printf("0");
    printf(" => %i\n\n", Cedulas(qtd, resultado2));
    free(qtd);  

    int resultado3[] = {5, 0, 0, 0, 0, 0, 0};
    qtd = quantNotas(1000);

    printf("Saque = 1125, Quant. cedulas:\n");
    imprimeCedulas(qtd, notas);
    printf("=> %i\n\n", Cedulas(qtd, resultado3));
    free(qtd);

    return 0;
}