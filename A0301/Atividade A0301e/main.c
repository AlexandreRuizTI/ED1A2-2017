/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 28 de Agosto de 2017, 15:29
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {
    int matriz[5][5];
    int vetC[5];
    int vetL[5];
    int c, l;
    int soma;

    for (c = 0; c < 5; c++) {
        vetC[c] = 0;
        vetL[c] = 0;


    }
    c = 0;
    l = 0;
    soma = 0;

    for (c = 0; c < 5; c++) {
        for (l = 0; l < 5; l++) {
            printf("Informe um número inteiro para a matriz[""%d"",""%d""]"":", c + 1, l + 1);
            scanf("%d", &matriz[c][l]);
        }
    }

    for (c = 0; c < 5; c++) {
        for (l = 0; l < 5; l++) {
            soma = soma + matriz[l][c]; // soma coluna
            vetC[c] = soma;

        }
        soma = 0;
    }
    printf("\n");
    for (l = 0; l < 5; l++) {
        for (c = 0; c < 5; c++) {
            soma = soma + matriz[l][c]; // soma coluna
            vetL[l] = soma;

        }
        soma = 0;
    }
    printf("\n");

    printf("******* MATRIZ *******\n");
    for (c = 0; c < 5; c++) {
        for (l = 0; l < 5; l++) {
            printf("  %d  ", matriz[c][l]);

        }
        printf("\n");
    }

    printf("SOMA DOS NÚMEROS DA COLUNA \n");
    for (c = 0; c < 5; c++) {
        printf(" %d ", vetC[c]);

    }
    printf("\n");
    printf("SOMA DOS NÚMEROS DA LINHA \n");
    for (l = 0; l < 5; l++) {
        printf(" %d ", vetL[l]);

    }
    printf("\n");



    return (EXIT_SUCCESS);
}

