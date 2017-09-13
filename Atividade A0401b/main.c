/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   main.c
 * Author: Alexandre
 *
 * Created on 30 de Agosto de 2017, 16:14
 */

#include <stdio.h>
#include <stdlib.h>

/*
 *
 */

/* MÉTODO PARA UM RESULTADO*/
/*
int fib(int n) {

    if (n == 1) {
        return 1;
    } else {
        if (n == 2)
            return 1;
        else
            return fib(n - 1) + fib(n - 2);
    }
}

int main(void) {
    int n;

    printf("Informe um número: ");
    scanf("%d", &n);

    printf(" Seu fibonacci é %d ", fib(n));
    return 0;
}*/

/* MÉTODO PARA A SEQUENCIA*/



int fib(int n) {
    int i, fib1 = 1, fib2 = 1, soma;
    for (i = 3; i <= n; i = i + 1) {
        soma = fib1 + fib2;
        fib1 = fib2;
        fib2 = soma;
    }
    return fib2;
}

int main(void) {
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));
    return 0;
}



/*  int fN, nn;

      if (fib > 0) {
          if (atual = 0) {
              printf("Sua sequencia de fibonacci é:");
              resul = atual + anterior;
              printf("%d ", resul);
              atual = resul + 1;
              printf("%d", atual);
              return fibonacci(fib, atual, anterior, resul);
          } else {
              resul = atual + anterior;
              printf("%d ", resul);
              anterior = atual;
              atual = resul;
              return fibonacci(fib - 1, atual, anterior, resul);
          }

      }*/