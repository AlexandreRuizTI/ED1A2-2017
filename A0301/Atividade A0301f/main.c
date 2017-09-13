/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 28 de Agosto de 2017, 16:38
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {
    int matrizA[3][3];
    int matrizB[3][3];
    int i, j;


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe um número inteiro para a matriz[""%d"",""%d""]"":", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf(" ———-  MATRIZ A ———-");
    printf("\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizB[i][j] = matrizA[j][i];

        }
    }
    printf(" ———-  MATRIZ TRANSPOSTA ———- \n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizB[i][j]);

        }
        printf("\n");
    }





    return (EXIT_SUCCESS);
}

