#include <stdio.h>
#include <stdlib.h>
#include "encadeadaSimples.h"

struct no *iniciar;
struct no *no1 = NULL;
struct no *no2 = NULL;
struct no *no3 = NULL;
struct no *no4 = NULL;
struct no *no5 = NULL;
struct no *noNovo = NULL;

void iniciarSimples() {

    // alocando memória
    no1 = malloc(sizeof (struct no));
    no2 = malloc(sizeof (struct no));
    no3 = malloc(sizeof (struct no));
    no4 = malloc(sizeof (struct no));
    no5 = malloc(sizeof (struct no));

    // Atribuindo os valores dos nós
    no1->informacao = 50;
    no2->informacao = 60;
    no3->informacao = 70;
    no4->informacao = 80;
    no5->informacao = 90;

    iniciar = no1; // o nó 1 inicia a lista
    no1->proximo = no2;
    no2->proximo = no3;
    no3->proximo = no4;
    no4->proximo = no5;
    no5->proximo = NULL; // acabou a lista coloca NULL
}

void mostrarSimples() {


    struct no *noCorrente = iniciar; // ver o porque de colocar esse noCorrente **
    printf("\n Os elementos da lista encadeada são: \n");
    while (noCorrente != NULL) {
        printf("|%d|", noCorrente->informacao);
        noCorrente = noCorrente->proximo;
        if (noCorrente != NULL) {
            printf("--->");
        } else {
            printf("---*");
        }
    }
}

void removerNo() {
    // PARA REMOVER NO COMECO DA LISTA
    iniciar = no2;
    free(no1);

    // PARA REMOVER NO MEIO DA LISTA

    no2->proximo = no4;
    free(no3);


    // PARA REMOVER NO FINAL DA LISTA
    no4->proximo = NULL;
    free(no5);

}

void inserirNo() {
    noNovo = malloc(sizeof (struct no));
    noNovo->informacao = 753;
    no2->proximo = noNovo;
    noNovo->proximo = no3;

}