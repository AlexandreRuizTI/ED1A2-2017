/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 22 de Novembro de 2017, 23:24
 */

#include <stdio.h>
#include <stdlib.h>
#include "encadeadaCircular.h"

int main(int argc, char** argv) {

    iniciarCircular();
    removerNo();
    inserirNo();
    mostrarCircular(3);


    return (EXIT_SUCCESS);
}

