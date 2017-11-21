#include "filaestaticas.h"
#include <stdio.h>
#include <stdlib.h>

int filaVazia(struct Fila f) {
    if (f.n == VAZIA) {
        printf("\n Sua Fila esta vazia!");
    }
}

int cheia(struct Fila f) {
    if (f.n == MAX_ELEM - 1) {
        printf("\n Sua Fila esta cheia!");
    }
}

void iniciarFila(struct Fila* f) {
    f->comeco = 0;
    f->n = VAZIA;
    for (int i = 0; i < MAX_ELEM; i++) { // varre a fila inteira zerando todos os elementos
        f->elem[i] = 0;
    }
}

char tdsElementos(struct Fila f) {
    if (filaVazia(f) == SIM) {
        printf("Sua fila esta vazia, impossível mostrar os elementos");
    } else {
        return f.elem[f.n];
    }
}

void listarElementos(struct Fila f) {
    int i;
    if (filaVazia(f) == SIM) { // verifica se a lista ta vazia antes de listar
        printf("\nSua lista está vazia, impossível listar os elementos\n");

    } else {
        printf("\nLISTANDO ELEMENTOS....\n");
        for (i = f.comeco; i <= f.n; i++) {
            printf("%c ", f.elem[i]);
        }
    }
}

int inserir(struct Fila* f, char u) {
    if (f->n == MAX_ELEM - 1) {
        printf("\nImpossível inserir, fila cheia\n");
    } else {
        f->n++;
        f->elem[f->n] = u;
    }
}

void remover(struct Fila* f) {
    /*
        char retorno;
        if (f->n == VAZIA) {
            printf("\n Sua Fila esta vazia, immpossivel remover o elemento!");
        } else {
            retorno = f->elem[0];

        }
     */

    if (f->n < f->comeco) {
        iniciarFila(f);
        printf("Fila vazia;");
    } else {
        f->elem[f->comeco] = 0;
        f->comeco++;
    }

}
// if (vazia(f) == PILHA_VAZIA)




