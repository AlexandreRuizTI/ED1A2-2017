#include <stdio.h>
#include <stdlib.h>
#include "filaestaticas.h"

int main(int argc, char** argv) {
    struct Fila Fila;
    iniciarFila(&Fila);
    inserir(&Fila, 'G');
    inserir(&Fila, 'J');
    inserir(&Fila, 'D');
    inserir(&Fila, 'R');
    inserir(&Fila, 'Q');
    listarElementos(Fila);
    remover(&Fila);
    listarElementos(Fila);
    remover(&Fila);
    remover(&Fila);
    remover(&Fila);
    remover(&Fila);
    inserir(&Fila, 'A');
    inserir(&Fila, 'B');
    inserir(&Fila, 'L');
    inserir(&Fila, 'P');
    inserir(&Fila, 'E');
    remover(&Fila);
    remover(&Fila);
    listarElementos(Fila);



    return (EXIT_SUCCESS);
}