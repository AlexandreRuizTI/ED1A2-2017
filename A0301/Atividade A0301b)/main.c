/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Agosto de 2017, 20:43
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {


    char vet[10][40];
    char vetor[10][40];
    int cont, i;

    for (cont = 0; cont < 10; cont++) {
        printf("Informe o %d nome: ", cont + 1);
        scanf("%s", &vet[cont]);
        printf("Informe o %d endereço: ", cont + 1);
        scanf("%s", &vetor[cont]);
    }
    do {
        printf("Informe um número de 1 a 10 \n");
        scanf("%d", &i);
        if (i != -1) {
            if ((i < 1) || (i > 10)) {
                printf("O número informado é inválido, informe um número de 1 a 10: \n");
            } else {
                printf("O nome é: %s \n e o endereço é %s \n", vet[i - 1], vetor[i - 1]);
            }
        }
    } while (i != -1);







    return (EXIT_SUCCESS);
}

