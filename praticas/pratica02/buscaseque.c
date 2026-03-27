#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscaseque(int vetor[], int tamanho, int valor){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == valor){
            return i;
        }
        
    }
    return -1;
}

int main(){
    int vetor[100];
    int valor, encontrado;

    srand(time(NULL));

    printf("Vetor gerado:\n");
    for(int i = 0; i < 100; i++){
        vetor[i] = rand() % 100;
        printf("%d\n ", vetor[i]);
    }

    printf("escreva um valor que voce queira: ");
    scanf("%d", &valor);

    encontrado = buscaseque(vetor, 100, valor);

    if(encontrado != -1){
        printf("o valor encontrado esta na posicao  %d\n", encontrado);
    } else{
        printf("Nao encontrado que pena");
    }
    


    return 0;
}