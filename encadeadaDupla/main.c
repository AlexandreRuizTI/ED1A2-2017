/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 00:12
 */

#include <stdio.h>
#include <stdlib.h>

#include "encadeadaDupla.h"

/*
 *
 */
int main(int argc, char** argv) {
    // ver o inserir na volta da lista dupla e não ta removendo
    montarDuplo();
    //removerNo();
    inserirNo();
    listarDuplo();


    return (EXIT_SUCCESS);
}

