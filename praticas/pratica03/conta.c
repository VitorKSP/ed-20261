#include <stdio.h>
#include "conta.h"
#include <stdlib.h>

void conta_criar(Conta* c, int numero) {
    if (c != NULL) {
        c->numero = numero;
        c->saldo = 0.0;
    }
}

void conta_depositar(Conta* c, float valor) {
    if (c != NULL && valor > 0) {
        c->saldo += valor;
    }
}

int conta_sacar(Conta* c, float valor) {
    if (c != NULL && valor > 0 && c->saldo >= valor) {
        c->saldo -= valor;
        return 1;
    }
    return 0;
}

float conta_ver_saldo(Conta* c) {
    if (c != NULL) {
        return c->saldo;
    }
    return 0;
}