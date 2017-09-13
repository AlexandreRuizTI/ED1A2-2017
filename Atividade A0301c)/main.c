/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 26 de Agosto de 2017, 22:25
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {
    int vet[10];
    int num, i, qtdNum;

    printf("Informe até 10 números:\n");
    printf("Se quiser encerrar basta digitar -1:\n");
    qtdNum = 0;
    do {
        printf("Informe um número de 0 a 100:\n");
        scanf("%d", &num);
        if ((num >= 0) && (num <= 100)) {
            vet[qtdNum] = num;
            qtdNum = qtdNum + 1;
        } else {
            if (num != -1) {
                printf("O número deve ser de 0 a 100!\n");
            }
        }
    } while ((num != -1) && (qtdNum < 10));
    printf("\nQuantidade de números: %d\n", qtdNum);
    if (qtdNum > 0) {
        printf("OS SEUS NÚMEROS PARES SÃO: ");
        for (i = 0; i < qtdNum; i++) {
            if ((vet[i] % 2) == 0) {
                printf("%d ", vet[i]);
            }
        }
        printf("\nOS SEUS NÚMEROS ÍMPARES SÃO: ");
        for (i = 0; i < qtdNum; i++) {
            if ((vet[i] % 2) != 0) {
                printf("%d ", vet[i]);
            }
        }
    } else {
        printf("\nNão foi digitado nenhum número");
    }
    return (EXIT_SUCCESS);
}

