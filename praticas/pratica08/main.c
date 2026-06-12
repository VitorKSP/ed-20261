#include <stdio.h>
#include "fila.h"

int main(){
    Fila *f = criar();

    enfileirar(f, 3);
    enfileirar(f, 7);
    enfileirar(f, 10);

    No *no = f->primeiro;
    while(no != NULL){
        printf("%i -> ", no->dados);
        no = no->proximo;
    }

    printf("\n");

    desenfileirar(f);

     no = f->primeiro;
    while(no != NULL){
        printf("%i -> ", no->dados);
        no = no->proximo;
    }
    printf("\n");

    enfileirar(f, 15);

    no = f->primeiro;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }    
    printf("\n");

    desenfileirar(f);

    no = f->primeiro;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }    
    printf("\n");

    desenfileirar(f);

    no = f->primeiro;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }
    printf("\n");
    
    return 0;
}

    