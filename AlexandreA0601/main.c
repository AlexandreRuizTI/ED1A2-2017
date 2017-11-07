/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 21:12
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilhaestatica.h"

/*
 *
 */
int main(int argc, char** argv) {

    struct Pilha pilhona; // declarando a struct
    iniciarPilha(&pilhona);
    inserir(&pilhona, 'O');
    inserir(&pilhona, 'V');
    inserir(&pilhona, 'O');
    inserir(&pilhona, 'F');
    /*
        inserir(&pilhona, 'Y');
        inserir(&pilhona, 'Z');
        inserir(&pilhona, 'X');
        inserir(&pilhona, 'B');
        inserir(&pilhona, 'Q');
        inserir(&pilhona, 'R');
        inserir(&pilhona, 'E');
        //inserir(&pilhona, 'U'); // ta dando erro ao inserir o 11 elemento ta aparecendo o erro antes de listar
     */

    listarElementos(pilhona);
    printf("\n");
    obterTopo(pilhona);
    printf("\n");
    remover(&pilhona);

    listarElementos(pilhona);
    palindromo(pilhona);


    return (EXIT_SUCCESS);
}

