/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Agosto de 2017, 17:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {


    char vet[10][40];
    int cont, k;

    for (cont = 0; cont < 10; cont++) {
        printf("Informe o %d nome: ", cont + 1);
        scanf("%s", &vet[cont]);
    }

    for (k = 0; k < 10; k++)
        printf("O indíce do vetor é %d e O nome é %s \n", k + 1, vet[k]);


    return (EXIT_SUCCESS);
}

