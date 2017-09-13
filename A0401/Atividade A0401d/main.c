/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 30 de Agosto de 2017, 17:34
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int binario(int n) {
    if (n < 2) {
        return (n);
    } else {
        return (10 * binario(n / 2) + n % 2);
    }

}

int main(int argc, char** argv) {
    int numero;
    int bin;

    printf("Informe um número: ");
    scanf("%d", &numero);
    bin = binario(numero);
    printf(" Seu número convertido para binário fica: %d ", bin);
    return (EXIT_SUCCESS);
}

