/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 31 de Agosto de 2017, 15:33
 */
#include <stdio.h>
#include <stdlib.h>

#include "conta.h"

int main(int argc, char** argv) {
    dadoConta dc;
    //   dc = (dadoConta*) malloc(sizeof (dadoConta));

    int op;
    printf("Por favor informe seu nome:");
    fgets(dc.nomeCliente, 30, stdin);
    printf("Por favor informe o número da conta:");
    scanf("%d", &dc.numConta);
    printf("\n");
    abrirConta(&dc);
    printf("\n");
    //    saldo(&dc);

    do {
        printf("\nInforme a operação desejada");
        printf("\n 1 - Lançar Crédito ");
        printf("\n 2 - Lançar Débito ");
        printf("\n 3 - Exibir Saldo ");
        printf("\n Caso queira encerrar digite 4 \n");
        scanf("%d", &op);
        switch (op) {

            case 1:
                lancaCredito(&dc);
                break;
            case 2:
                lancaDebito(&dc);
                break;
            case 3:
                saldo(&dc);
                break;
            default:
                if (op != 4) {
                    printf("Comando Inválido");
                }
                break;
        }
    } while (op != 4);






    return (EXIT_SUCCESS);
}

