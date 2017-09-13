/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 22 de Agosto de 2017, 19:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
void processaNumeros(int num1, int num2, int *num3) {
    num1 = num1 * 10;
    num2 = num2 * 100;
    *num3 = *num3 * 1000;
    printf("Em processaNumeros(global1 -> num1 vale %d\n", num1);
    printf("Em processaNumeros(global2 -> num2 vale %d\n", num2);
    printf("Em processaNumeros(global3 <-> num3 vale %d\n", *num3);
}

int main(int argc, char** argv) {
    int global1, global2, global3;
    global1 = 1;
    global2 = 2;
    global3 = 3;
    processaNumeros(global1, global2, &global3);
    printf("Valor de global após processaNumeros é %d\n", global1);
    printf("Valor de globa2 após processaNumeros é %d\n", global2);
    printf("Valor de globa3 após processaNumeros é %d\n", global3);
    return (EXIT_SUCCESS);
}

