#include <stdio.h>
 float calcular_media(float *numeros, int tamanho){

    if(tamanho <= 0 || tamanho > 100 ){
        return 0.0f;
    }

    
    float soma = 0;
    for(int i= 0; i<tamanho;i++){
        soma += *(numeros + i);

    }

    return soma/tamanho;
 }


int main(){
    float numeros[] = {12.0, 5.4, 8.5, 2.5, 35};
    int tamanho = sizeof(numeros)/ sizeof(numeros[0]);

    float media = calcular_media(numeros,tamanho);

    

    printf("Media: %.2f\n", media);
     



    




    return 0;
}