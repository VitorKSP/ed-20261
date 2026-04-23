#include <stdio.h>
 float calcular_media(int *numeros, int tamanho){

    if(tamanho <= 0 || tamanho > 100 ){
        return 0;
    }

    
    float soma = 0;
    for(int i= 0; i<tamanho;i++){
        soma += *(numeros + i);

    }

    return soma/tamanho;
 }


int main(){
     int numeros[] = {12, 5, 8, 2, 35};
     int numeros2[] = {12, 5, 8, 2, 35, 5, 7, 6};
    int tamanho = sizeof(numeros)/ sizeof(numeros[0]);
    int tamanho2 = sizeof(numeros2)/ sizeof(numeros2[0]);

    float media = 0;

     media = calcular_media(numeros,tamanho);
     printf("Quant. Numeros = 5, Soma = 62, Media = %.2f => %i\n", media, media == 12.4f);

     media = calcular_media(numeros2,tamanho2);
     printf("Quant. Numeros = 8, Soma = 80, Media = %.2f => %i\n", media, media == 10);

    
     



    




    return 0;
}