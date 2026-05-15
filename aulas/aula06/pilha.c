#include <stdlib.h>
#include "pilha.h"

pilha *criar(){
    Pilha *pilha = (Pilha *)malloc(sizeof(Pilha));

    if(pilha == NULL){
        return NULL;
    }
    pilha->topo = NULL;
    pilha->quantidade = 0;
    return pilha;
}

int pilha_vazia(Pilha *pilha){
   return pilha != NULL && pilha->topo == NULL;
}


No pilha_topo(Pilha *pilha){
  return pilha->topo;
}


void empilhar(Pilha *pilha, int valor){

}