/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 14 de Novembro de 2017, 16:12
 */

#include <stdio.h>
#include <stdlib.h>
#include "fecirculares.h"

/*
 *
 */
int main(int argc, char** argv) {

    struct Fila F;
    iniciaFila(&F);
    inserir(&F, 'G');
    inserir(&F, 'J');
    inserir(&F, 'D');
    inserir(&F, 'R');
    inserir(&F, 'Q');
    listarElementos(F);
    removerElem(&F);
    listarElementos(F);
    removerElem(&F);
    removerElem(&F);
    removerElem(&F);
    removerElem(&F);
    inserir(&F, 'A');
    inserir(&F, 'B');
    inserir(&F, 'L');
    inserir(&F, 'P');
    inserir(&F, 'E');
    removerElem(&F);
    removerElem(&F);
    listarElementos(F);
    return (EXIT_SUCCESS);

}

