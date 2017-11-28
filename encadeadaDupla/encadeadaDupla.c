#include <stdio.h>
#include <stdlib.h>
#include "encadeadaDupla.h"


struct noDuplo *iniciaB;
struct noDuplo *noB1 = NULL;
struct noDuplo *noB2 = NULL;
struct noDuplo *noB3 = NULL;
struct noDuplo *noB4 = NULL;
struct noDuplo *noB5 = NULL;
struct noDuplo *noB6 = NULL;
struct noDuplo *noNovo = NULL;
struct noDuplo *noNovo2 = NULL;
struct noDuplo *noNovo3 = NULL;

void montarDuplo() {
    noB1 = malloc(sizeof (struct noDuplo));
    noB2 = malloc(sizeof (struct noDuplo));
    noB3 = malloc(sizeof (struct noDuplo));
    noB4 = malloc(sizeof (struct noDuplo));
    noB5 = malloc(sizeof (struct noDuplo));
    noB6 = malloc(sizeof (struct noDuplo));

    noB1->dado = 40;
    noB2->dado = 50;
    noB3->dado = 60;
    noB4->dado = 70;
    noB5->dado = 80;
    noB6->dado = 90;

    iniciaB = noB1;
    noB1->proximo = noB2;
    noB1->anterior = NULL;

    noB2->proximo = noB3;
    noB2->anterior = noB1;

    noB3->proximo = noB4;
    noB3->anterior = noB2;

    noB4->proximo = noB5;
    noB4->anterior = noB3;

    noB5->proximo = noB6;
    noB5->anterior = noB4;

    noB6->proximo = NULL;
    noB6->anterior = noB5;

}

void listarDuplo() {
    struct noDuplo *noCorrente = iniciaB;
    printf("\nOs elementos da lista encadeada dupla são:\n");
    while (noCorrente->proximo != NULL) {
        printf("|%d|--->", noCorrente->dado);
        noCorrente = noCorrente->proximo;
    }
    if (noCorrente != NULL) {
        printf("|%d|--->", noCorrente->dado);
        noCorrente = noCorrente->anterior;
    }
    while (noCorrente != NULL) {
        printf("|%d|", noCorrente->dado);
        noCorrente = noCorrente->anterior;
        if (noCorrente != NULL) {
            printf("--->");
        } else {
            printf("---*");
        }
    }
}

void removerNo() {

    //PARA REMOVER NO COMECO DA LISTA
    noB1->proximo = noB3;
    noB3->anterior = noB1;
    free(noB2);

    //PARA REMOVER NO MEIO DA LISTA
    noB3->proximo = noB5;
    noB5->anterior = noB3;
    free(noB4);

    //PARA REMOVER NO FINAL DA LISTA
    noB5->proximo = NULL;
    free(noB6);

}

void inserirNo() {

    /*
        //PARA INSERIR NO INICIO DA LISTA
        noNovo2 = malloc(sizeof (struct noDuplo));
        noNovo2->dado = 45;
        noB1->proximo = noNovo2;
        noNovo2->anterior = noB1;
        noNovo2->proximo = noB2;
        noB2->anterior = noNovo2;
     */

    /*
        //PARA INSERIR NO MEIO DA LISTA
        noNovo3 = malloc(sizeof (struct noDuplo));
        noNovo3->dado = 65;
        noB4->proximo = noNovo3;
        noNovo3->anterior = noB4;
        noNovo3->proximo = noB5;
        noB3->anterior = noNovo3;
     */

    //PARA INSERIR NO FINAL DA LISTA
    noNovo = malloc(sizeof (struct noDuplo));
    noNovo->dado = 100;
    noB5->proximo = noNovo;
    noNovo->anterior = noB5;
    noNovo->proximo = NULL;

}
