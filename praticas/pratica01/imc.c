#include <stdio.h>

int main(){
    float peso;
    float altura;
    

    printf("Escreva seu peso: ");
    scanf("%f", &peso);

    printf("escreva sua altura: ");
    scanf("%f", &altura);

    float imc = peso/altura*altura;

    if(imc < 18.5){
        printf("Voce esta abaixo do peso");
    }else if(18.5 < imc < 24.9){
        printf("Voce esta no peso normal");
    }else if(25.0 < imc < 29.9){
        printf("Voce esta sobrepeso");
        }else  (imc >= 30.0);{ 
        printf("Voce esta obeso");
    }



    return 0;
}