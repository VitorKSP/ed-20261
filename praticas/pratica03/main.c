#include <stdio.h>
#include <stdlib.h>
#include "conta.h"

int main() {
    Conta c1; // agora é variável normal (sem malloc)

    conta_criar(&c1, 123);

    conta_depositar(&c1, 1000);
    printf("Saldo: %.2f\n", conta_ver_saldo(&c1));

    conta_sacar(&c1, 300);
    printf("Saldo apos saque: %.2f\n", conta_ver_saldo(&c1));

    if (conta_sacar(&c1, 800)) {
        printf("Saque realizado\n");
    } else {
        printf("Saldo insuficiente\n");
    }

    printf("Saldo final: %.2f\n", conta_ver_saldo(&c1));

    return 0;
}