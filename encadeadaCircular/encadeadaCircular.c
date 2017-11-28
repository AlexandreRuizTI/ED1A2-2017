#include <stdio.h>
#include <stdlib.h>
#include "encadeadaCircular.h"

struct no *iniciar;
struct no *no1 = NULL;
struct no *no2 = NULL;
struct no *no3 = NULL;
struct no *no4 = NULL;
struct no *no5 = NULL;
struct no *no6 = NULL;
struct no *noNovo = NULL;

void iniciarCircular() {

    // alocando memória
    no1 = malloc(sizeof (struct no));
    no2 = malloc(sizeof (struct no));
    no3 = malloc(sizeof (struct no));
    no4 = malloc(sizeof (struct no));
    no5 = malloc(sizeof (struct no));
    no6 = malloc(sizeof (struct no));



    // Atribuindo os valores dos nós
    no1->informacao = 50;
    no2->informacao = 60;
    no3->informacao = 70;
    no4->informacao = 80;
    no5->informacao = 90;
    no6->informacao = 100;


    iniciar = no1; // o nó 1 inicia a lista
    no1->proximo = no2;
    no2->proximo = no3;
    no3->proximo = no4;
    no4->proximo = no5;
    no5->proximo = no6; // acabou a lista coloca NULL
    no6->proximo = iniciar;



}

void mostrarCircular(int voltasDesejadas) {
    int v = 1;
    struct no *noCorrente = iniciar; // ver o porque de colocar esse noCorrente **
    printf("\n Os elementos da lista encadeada circular são: \n");
    while (v <= voltasDesejadas) {
        printf("|%d|", noCorrente->informacao);
        noCorrente = noCorrente->proximo;
        if (noCorrente != iniciar) {
            printf("--->");
        } else {
            printf("--- (%d)*", v);
            v++;
        }
    }
}

void removerNo() {

    //PARA REMOVER NO COMECO DA LISTA
    no1->proximo = no3;
    free(no2);

    //PARA REMOVER NO MEIO DA LISTA
    no3->proximo = no5;
    free(no4);


    //PARA REMOVER NO FINAL DA LISTA
    no5->proximo = iniciar;
    free(no6);


}

void inserirNo() {
    noNovo = malloc(sizeof (struct no));
    noNovo->informacao = 110;
    no5->proximo = noNovo;
    noNovo->proximo = iniciar;

}