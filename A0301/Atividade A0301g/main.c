/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 28 de Agosto de 2017, 16:56
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {
    int matrizA[3][3];
    int matrizB[3][3];
    int matrizR[3][3];
    int matrizMult[3][3];
    int i, j, k;
    char operacao;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizMult[i][j] = 0;
            matrizR[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe um número inteiro[""%d"",""%d""]"":", i + 1, j + 1);
            scanf("%d", &matrizA[i][j]);
        }
    }
    printf("———-  MATRIZ A ———-\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Informe um número inteiro[""%d"",""%d""]"":", i + 1, j + 1);
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("———-  MATRIZ B ———-\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Informe a operação que deseja realizar:");
    scanf("%s", &operacao);
    switch (operacao) {
        case '+':
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    matrizR[i][j] = matrizA[i][j] + matrizB[i][j];
                }
            }
            break;
        case '-':
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    matrizR[i][j] = matrizA[i][j] - matrizB[i][j];
                }
            }
            /*dasdsa*/
            break;
        case 'x':
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    k = matrizA[j][0] * matrizB[i][j];
                    matrizMult[i][0] = matrizMult[i][0] + k;

                    // matrizR[i][j] = matrizA[i][j] * matrizB[i][j];
                }
            }

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    k = matrizA[j][1] * matrizB[i][j];
                    matrizMult[i][1] = matrizMult[i][1] + k;


                }
            }

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    k = matrizA[j][2] * matrizB[i][j];
                    matrizMult[i][2] = matrizMult[i][2] + k;


                }
            }
            for (j = 0; j < 3; j++) {
                for (i = 0; i < 3; i++) {
                    matrizR[j][i] = matrizMult[j][i];
                }
            }
            break;
    }
    printf("Resultado da matriz\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matrizR[i][j]);
        }
        printf("\n");
    }




    return (EXIT_SUCCESS);
}

