/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   pilhaestatica.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 21:14
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilhaestatica.h"

int vazia(struct Pilha b) {
    if (b.topo == -1) {
        return SIM;
    } else {
        printf("\nSua pilha não esta vazia\n");
        return NAO;

    }
}

int cheia(struct Pilha b) {
    if (b.topo == MAX_ELEM - 1) {
        return SIM;
    } else {
        return NAO;

    }
}

void iniciarPilha(struct Pilha* b) {
    int ip;
    b->topo = PILHA_VAZIA;
    for (ip = 0; ip < MAX_ELEM; ip++) { // varre a pilha inteira zerando todos os elementos
        b->elem[ip] = 0;
    }
}

char obterTopo(struct Pilha b) {
    if (b.topo == PILHA_VAZIA) { // verifica se a pilha ta vazia antes de obter o topo
        printf("\nSua Pilha está vazia, impossível obter topo\n");
        return SIM;
    } else {

        return printf("\nSeu elemento do topo é:%c ", b.elem[b.topo]);
    }
}

void listarElementos(struct Pilha b) {
    int i;
    if (b.topo == PILHA_VAZIA) { // verifica se a pilha ta vazia antes de listar
        printf("\nSua Pilha está vazia, impossível listar os elementos\n");

    } else {
        printf("\nLISTANDO ELEMENTOS....\n");
        for (i = 0; i <= b.topo; i++) {
            printf("%c ", b.elem[i]);
        }
    }
}

int inserir(struct Pilha* b, char informacao) {
    //  if (cheia(b) == PILHA_CHEIA) perguntar porque nao pode ser assim
    if (cheia(*b)) {
        printf("\nImpossível inserir, pilha cheia\n");
    } else {
        b->elem[b->topo + 1] = informacao;
        b->topo++;
        return SUCESSO;
    }
}

char remover(struct Pilha* b) {
    char retorno;
    // if (vazia(b) == PILHA_VAZIA)
    if (b->topo == PILHA_VAZIA) {
        printf("\nImpossível remover, pilha vazia\n");
        return SIM;
    } else {
        retorno = b->elem[b->topo];
        b->elem[b->topo] = 0;
        b->topo--;
        return printf("\nO elemento removido é:%c\n", retorno);
    }
}

void palindromo(struct Pilha b) {
    struct Pilha e;
    iniciarPilha(&e);
    int verificar = 0;
    for (int i = 0; i <= b.topo; i++) {
        inserir(&e, b.elem[b.topo - i]);
        if (e.elem[i] == b.elem[i]) {
            verificar = SIM;
        } else {
            verificar = NAO;
            break;
        }
    }

    if (verificar == SIM) {
        printf("\n\nEsta Lista é um Palíndromo!!\n");
    } else {
        printf("\n\nEsta Lista NÃO é um Palíndromo!!\n");
    }
}
/*
 struct Lista ver;
    iniciarLista(&ver);
    int i = 0, k = 0, cont = 0;
    for (i = 0; i < l.n; i++) {
        inserir(&ver, i, l.elem[i]);
    }
    inverter(&ver);
    for (k = 0; k < i; k++) {
        if (ver.elem[k] == l.elem[k]) {
            cont++;
        }
    }
    if (cont == i) {
        printf("\n\nEsta Lista é um Palíndromo!!\n");
    } else {
        printf("\n\nEsta Lista NÃO é um Palíndromo!!\n");
    }
 */




