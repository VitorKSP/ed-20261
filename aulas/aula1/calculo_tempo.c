#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    // ligou o cronometro
    clock_t tempo_inicial = clock();
   
    long int soma = 10 + 20;

   // desligou o cronometro
    clock_t tempo_final = clock();

    double duracao = (double) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    printf("O tempo de execucao foi: %.1f seg", duracao);

    tempo_inicial = clock();

    for(long int i =0; i<10000000000; i++){
        soma = soma + 1; 
    }

    tempo_final = clock();

     duracao = (double) (tempo_final - tempo_inicial) / CLOCKS_PER_SEC;

    printf("O tempo de execucao foi: %.1f seg", duracao);

    tempo_inicial = clock();

    for(long int i =0; i<100000; i++){
        soma = soma + 1; 
    }




 return 0;
}