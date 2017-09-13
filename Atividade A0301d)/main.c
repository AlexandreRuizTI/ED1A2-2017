/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 27 de Agosto de 2017, 19:09
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {

    int vetA[5];
    int vetB[5];
    int vetC[10];
    int i, j, c;

    for (i = 0; i < 5; i++) {
        printf("Informe o %d valor de A: ", i + 1);
        scanf("%d", &vetA[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("Informe o %d valor de B: ", i + 1);
        scanf("%d", &vetB[i]);
    }


    // perguntar pro Osvandre * * * *
    c = -1;
    for (j = 0; j < 10; j++) {
        c++;
        vetC[j] = vetA[c];
        vetC[j + 1] = vetB[c];
        j++;
    }

    /* vetC[1] == vetA[1];
    vetC[2] == vetB[1];
    vetC[3] == vetA[2];
    vetC[4] == vetB[2];
    vetC[5] == vetA[3];
    vetC[6] == vetB[3];
    vetC[7] == vetA[4];
    vetC[8] == vetB[4];
    vetC[9] == vetA[5];
    vetC[10] == vetB[5];*/

    printf("Ordem intercalada dos vetores, no vetor C: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetC[i]);
    }






    return (EXIT_SUCCESS);
}

