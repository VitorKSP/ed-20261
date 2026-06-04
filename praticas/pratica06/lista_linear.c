#include <stdio.h>
#include <stdlib.h>
#include "lista_linear.h"

/* Nó da lista */
typedef struct no_t {
    struct no_t* anterior;
    int valor;
    struct no_t* proximo;
} No;

/* Estrutura da lista */
struct lista_t {
    No* primeiro;
    No* ultimo;
};

/* Cria uma lista vazia */
Lista* lista_criar() {
    Lista* lista = (Lista*) malloc(sizeof(Lista));

    if (lista != NULL) {
        lista->primeiro = NULL;
        lista->ultimo = NULL;
    }

    return lista;
}

/* Verifica se a lista está vazia */
int lista_esta_vazia(Lista* lista) {
    return lista->primeiro == NULL &&  lista != NULL;
}

void lista_inserir(Lista* lista, int valor) {
    No* novo = (No*) malloc(sizeof(No));

    if (novo == NULL)
        return;

    novo->valor = valor;
    novo->proximo = NULL;
    novo->anterior = lista->ultimo;

    if (lista_esta_vazia(lista)) {
        lista->primeiro = novo;
    } else {
        lista->ultimo->proximo = novo;
    }

    lista->ultimo = novo;
}

int lista_buscar(Lista* lista, int valor) {
    No* atual = lista->primeiro;

    while (atual != NULL) {
        if (atual->valor == valor)
            return 1;

        atual = atual->proximo;
    }

    return 0;
}


int lista_remover(Lista* lista, int valor) {
    No* atual = lista->primeiro;

    while (atual != NULL) {

        if (atual->valor == valor) {

            if (atual->anterior != NULL)
                atual->anterior->proximo = atual->proximo;
            else
                lista->primeiro = atual->proximo;

            if (atual->proximo != NULL)
                atual->proximo->anterior = atual->anterior;
            else
                lista->ultimo = atual->anterior;

            free(atual);
            return 1;
        }

        atual = atual->proximo;
    }

    return 0;
}

void lista_exibir(Lista* lista) {
    No* atual = lista->primeiro;

    printf("Lista: ");

    while (atual != NULL) {
        printf("%d ", atual->valor);
        atual = atual->proximo;
    }

    printf("\n");
}

void lista_destruir(Lista* lista) {
    No* atual = lista->primeiro;

    while (atual != NULL) {
        No* aux = atual;
        atual = atual->proximo;
        free(aux);
    }

    free(lista);
}