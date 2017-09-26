/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 19 de Setembro de 2017, 21:46
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
void binario(int n) {
    if (n <= 1) {
        printf("%d", n);
        return;
    } else {
        if ((n > 1)&&(n <= 3)) {
            printf("%d", n / 2);
            printf("%d", n % 2);
            return;
        } else {
            binario(n / 2);
            printf("%d", n % 2);
        }
    }
}

int main(int argc, char** argv) {
    int num;

    printf("\nInforme um numero: ");
    scanf("%d", &num);
    binario(num);

    return (EXIT_SUCCESS);
}

