#include <stdio.h>
#include "lista_linear.h"

int main() {

    Lista* lista = lista_criar();

    printf("Inserindo elementos...\n");

    lista_inserir(lista, 50);
    lista_inserir(lista, 70);
    lista_inserir(lista, 90);
    lista_inserir(lista, 110);

    lista_exibir(lista);

    printf("\nBuscando valor 70...\n");

    if (lista_buscar(lista, 70))
        printf("Valor encontrado!\n");
    else
        printf("Valor nao encontrado!\n");

    printf("\nRemovendo valor 70...\n");

    if (lista_remover(lista, 70))
        printf("Removido com sucesso!\n");
    else
        printf("Valor nao encontrado!\n");

    lista_exibir(lista);

    printf("\nRemovendo valor 50...\n");
    lista_remover(lista, 50);

    lista_exibir(lista);

    printf("\nLista vazia?\n ");

    if (lista_esta_vazia(lista))
        printf("Sim\n");
    else
        printf("Nao\n");

    lista_destruir(lista);

    return 0;
}