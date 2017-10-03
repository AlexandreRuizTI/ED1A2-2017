/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 2 de Outubro de 2017, 16:22
 */

#include <stdio.h>
#include <stdlib.h>

#include "listalinearestatica.h"

/*
 *
 */
int main(int argc, char** argv) {
    struct Lista l1;
    printf("\nLista foi Iniciada\n");
    iniciarLista(&l1);
    mostrarLista(l1);

    printf("\nInserindo o Elemento A na Lista\n");
    inserir(&l1, POS_FINAL, 'A');
    inserir(&l1, POS_FINAL, 'B');
    printf("%c", acessar(l1, 0));

    printf("\nAlterando o Elemento A para D \n");
    alterar(&l1, 0, 'D');
    mostrarLista(l1);

    printf("\nRemovendo o Segundo Elemento\n");
    remover(&l1, 1);
    mostrarLista(l1);

    struct Lista l2;
    iniciarLista(&l1);
    iniciarLista(&l2);

    inserir(&l1, POS_FINAL, 'B');
    inserir(&l1, POS_FINAL, 'C');
    inserir(&l1, POS_FINAL, 'D');
    inserir(&l2, POS_FINAL, 'A');
    inserir(&l2, POS_FINAL, 'F');

    printf("\nCancatenando as listas \n");
    concatenar(&l1, &l2);
    mostrarLista(l1);

    printf("\nInvertendo as Listas\n");
    inverter(&l1);
    mostrarLista(l1);

    struct Lista Resultado;
    printf("\nCriando SubLista\n");
    Resultado = subLista(l1, 1, 2);
    mostrarLista(Resultado);
    iniciarLista(&l1);

    printf("\nInserindo na Ordem\n");
    inserirOrdenado(&l1, 'P');
    inserirOrdenado(&l1, 'H');
    inserirOrdenado(&l1, 'E');
    inserirOrdenado(&l1, 'L');
    inserirOrdenado(&l1, 'Q');
    mostrarLista(l1);


    printf("\nIntercalando listas\n");
    Resultado = intercalar(&l1, &l2);
    mostrarLista(Resultado);
    iniciarLista(&l2);
    inserir(&l2, POS_FINAL, 'H');
    inserir(&l2, POS_FINAL, 'A');
    inserir(&l2, POS_FINAL, 'U');
    printf("\nOrdenando em Ordem Crescente\n");
    ordemCrescente(&l2);
    mostrarLista(l2);
    printf("\n Mostrando palíndromo\n");
    palindromo(l2);
    iniciarLista(&l1);
    inserir(&l1, POS_FINAL, 'o');
    inserir(&l1, POS_FINAL, 'v');
    inserir(&l1, POS_FINAL, 'o');
    mostrarLista(l1);
    palindromo(l1);
    removerRepetidos(&l1);

    int n[10];
    int cont;
    for (int i = 0; i < 10; i++) {
        n[i] = 0;
    }
    cont = visualizar(&l1, 'v', n);
    printf("\nPosição do V:");
    for (int i = 0; i < cont; i++) {
        printf("%d ", n[i]);
    }


    return (EXIT_SUCCESS);
}

