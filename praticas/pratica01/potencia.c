#include <stdio.h>
double calcular_potencia(float base, float expoente){
    if(expoente < 0){
        return 0;
    }
    double potencia = 1;
    for(int i = 0;i < expoente; i++){
        potencia = potencia * base;
        
    }
    return potencia;

}

int main() {
    double potencia;

    potencia = calcular_potencia(2,5);
   printf("base = 2 , expoente = 5, potencia = %1.0f --> %i\n", potencia, potencia==32);

   potencia = calcular_potencia(2,0);
   printf("base = 2 , expoente = 0, potencia = %1.0f --> %i\n", potencia, potencia==1);

   potencia = calcular_potencia(0,5);
   printf("base = 0 , expoente = 5, potencia = %1.0f --> %i\n", potencia, potencia==0);

   potencia = calcular_potencia(0,0);
   printf("base = 0 , expoente = 0, potencia = %1.0f --> %i\n", potencia, potencia==-1);



    return 0;
}