#include <stdio.h>
#include "tabela_hash.h"



int main()
{
    TabelaHash *tabela = criar(20);

    inserir(tabela, 3);
    inserir(tabela, 12);
    inserir(tabela, 20);
    inserir(tabela, 36);

    printf("A tabela hash tem %i elementos:\n",
           tabela->quantidade);

    for (int i = 0; i < tabela->tamanho; i++)
    {
        printf("[%d] -> ", i);
        No *no = tabela->dados[i];
        while(no != NULL) {
            printf("%i -> ", no->dado);
            no = no->proximo;
        }
        printf("\n");
    }

    printf("Procure o valor 36 na tabela hash:\n");
    int achei = buscar(tabela, 36);
    if (achei < 0)
    {
        printf("Nao achei!\n");
    }
    else
    {
        printf("Achei na posicao %i\n", achei);
    }

    printf("Procure o valor 15 na tabela hash:\n");
    achei = buscar(tabela, 15);
    if (achei < 0)
    {
        printf("Nao achei!\n");
    }
    else
    {
        printf("Achei na posicao %i\n", achei);
    }

    remover(tabela, 12);

    printf("A tabela hash tem %i elementos:\n",
           tabela->quantidade);

    for (int i = 0; i < tabela->tamanho; i++)
    {
        printf("[%d] -> ", i);
        No *no = tabela->dados[i];
        while(no != NULL) {
            printf("%i -> ", no->dado);
            no = no->proximo;
        }
        printf("\n");
    }    

    destruir(tabela);

    return 0;
}