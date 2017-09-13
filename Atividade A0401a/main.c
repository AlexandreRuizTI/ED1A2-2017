/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 30 de Agosto de 2017, 15:54
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int fat(int n) {
    if (n) {
        return n * fat(n - 1);
    } else {
        return 1;
    }
}

int main() {
    int n;
    printf("\n\nDigite um valor para n: ");
    scanf("%d", &n);
    printf("\nO fatorial de %d é %d", n, fat(n));
    printf("Obrigado por usar");
    return (EXIT_SUCCESS);
}

