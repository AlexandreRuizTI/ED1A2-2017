/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "conta.h"

float abrirConta(dadoConta *c) {
    c->saldo = 0;
    printf("Olá %s o número de sua conta é %d e seu saldo atualmente é %2.0f", c->nomeCliente, c->numConta, c->saldo);

}

float lancaCredito(dadoConta *c) {
    float soma;
    printf("Informe um valor para creditar: ");
    scanf("%f", &soma);
    c->saldo = c->saldo + soma;
    return printf("Seu é saldo atual é %2.0f", c->saldo);
}

float lancaDebito(dadoConta *c) {
    float debito;
    printf("Informe um valor para debitar: ");
    scanf("%f", &debito);
    c->saldo = c->saldo - debito;
    return printf("Seu é saldo atual é %2.0f", c->saldo);
}

void saldo(dadoConta* c) {
    printf("\nCliente: %s", c->nomeCliente);
    printf("Conta..: %d", c->numConta);
    printf("\nSaldo..: %2.0f", c->saldo);

}
