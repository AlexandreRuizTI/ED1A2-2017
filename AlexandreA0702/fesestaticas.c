#include <stdio.h>
#include <stdlib.h>
#include "fecirculares.h"

void iniciaFila(struct Fila *F) {
    F->comeco = 1;
    F->fim = 0;
    F->tamanho = 0;
    for (int i = 0; i < m; i++) {
        F->elemento[i] = 0;
    }
}

void inserir(struct Fila *F, int x) {
    if (F->tamanho == m - 1) {
        printf("Sua fila está cheia!!");
    } else {
        F->tamanho++;
        F->fim = (F->fim % (m - 1)) + 1;
        F->elemento[F->fim] = x;
    }
}

void removerElem(struct Fila *F) {
    if (F->tamanho == 0) {
        printf("Sua fila está vazia");
    } else {
        F->tamanho--;
        F->elemento[F->comeco] = 0;
        F->comeco = (F->comeco % (m - 1)) + 1;
    }
}

int consultaPrimeiro(struct Fila F) {
    if (F.tamanho == 0) {
        printf("Fila Vazia!");
    } else {
        return (F.elemento[F.comeco]);
    }
}

char consultaPrimero(struct Fila F) {
    char y;
    if (F.tamanho == 0) {
        printf("Fila Vazia");
    } else {
        y = F.elemento[F.comeco];
        return (y);
    }
}

void filaVazia(struct Fila F) {
    if (F.tamanho == 0) {
        printf("Fila VAZIA!");
    }
}

void listarElementos(struct Fila F) {
    if (F.tamanho == 0) { // verifica se a lista ta vazia antes de listar
        printf("\nSua lista está vazia, impossível listar os elementos\n");
    } else {
        printf("\nLISTANDO ELEMENTOS....\n");
        for (int i = 0; i < m; i++) {
            if (F.elemento[i] != 0) {
                printf("%c ", F.elemento[i]);
            }
        }
    }
}
