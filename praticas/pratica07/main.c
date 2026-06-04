#include <stdio.h>
#include "pilha.h"

int main() {
    Pilha *p = criar();

    empilhar(p, 3);  // 0 -> 8 -> 1
    empilhar(p, 9);
    empilhar(p, 6);

    No *no = p->topo;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }
    printf("\n");

    desempilhar(p);  // 8 -> 1

    no = p->topo;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }
    printf("\n");
    
    empilhar(p, 5);  // 6 -> 8 -> 1

    no = p->topo;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }
    printf("\n");

    desempilhar(p);  // 8 -> 1

    no = p->topo;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }
    printf("\n");
    
    desempilhar(p);  // 1 ->

    no = p->topo;
    while(no != NULL) {
        printf("%i -> ", no->dados);
        no = no->proximo;
    }
    printf("\n");

    destruir(p);

    return 0;
}