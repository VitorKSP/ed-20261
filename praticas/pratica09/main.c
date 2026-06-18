#include <stdio.h>
#include "arvore_binaria.h"

int main(){

    Arvore *arvore = arvoreCriar(50);

    arvoreInserir(arvore, 10);
    arvoreInserir(arvore, 55);
    arvoreInserir(arvore, 64);
    arvoreInserir(arvore, 70);
    arvoreInserir(arvore, 89);
    arvoreInserir(arvore, 93);
    arvoreInserir(arvore, 23);

    printf("Pre ordem:\n");
    arvorePreOrdem(arvore);
    printf("\n");

    printf("Em ordem:\n");
    arvoreEmOrdem(arvore);
    printf("\n");

    printf("Pos ordem:\n");
    arvorePosOrdem(arvore);
    printf("\n");

    arvoreDestruir(arvore);

    return 0;
}