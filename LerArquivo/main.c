/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 19 de Setembro de 2017, 19:19
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */
int main(int argc, char** argv) {

    char nomeArq[] = "nomes.txt";
    char ch1[256];
    FILE *arq;
    int n = 0;
    arq = fopen(nomeArq, "r");
    if (arq == NULL) {
        printf("Erro,não foi possivel abrir o arquivo\n");
    } else {
        while ((fscanf(arq, "%s\n", &ch1)) != EOF) {
            //   strcat(ch1[n], "\0");
            printf("%s\n", ch1);
            n++;
        }
        printf("Foram lidas %d linhas do arquivo!", n);

    }
    fclose(arq);

    return (EXIT_SUCCESS);
}

