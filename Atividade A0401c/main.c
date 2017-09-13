/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 30 de Agosto de 2017, 18:12
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int multiplicar(int m, int n) {
    if (m > 1) {
        return n + multiplicar((m - 1), n);
    }
}

int main(int argc, char** argv) {
    int m, n;
    printf("Informe o primeiro número:");
    scanf("%d", &m);
    printf("Informe o segundo número:");
    scanf("%d", &n);

    printf("Sua multiplicação ficou:%d ", multiplicar(m, n));


    return (EXIT_SUCCESS);
}

