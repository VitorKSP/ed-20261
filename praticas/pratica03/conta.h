#ifndef CONTA_H
#define CONTA_H

typedef struct {
    int numero;
    float saldo;
} Conta;

// Funções
void conta_criar(Conta* c, int numero);
void conta_depositar(Conta* c, float valor);
int conta_sacar(Conta* c, float valor);
float conta_ver_saldo(Conta* c);

#endif