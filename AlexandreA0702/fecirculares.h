/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   fecirculares.h
 * Author: Alexandre
 *
 * Created on 14 de Novembro de 2017, 16:20
 */

#ifndef FECIRCULARES_H
#define FECIRCULARES_H

#ifdef __cplusplus
extern "C" {
#endif
#define m 10
#define SIM 1
#define NAO 0

    struct Fila {
        int elemento[m];
        int tamanho;
        int comeco;
        int fim;
    };

    struct Fila F;
    void iniciaFila(struct Fila*);
    void inserir(struct Fila*, int);
    void removerElem(struct Fila*);
    int consultaPrimeiro(struct Fila);
    char consultaPrimero(struct Fila);
    void filaVazia(struct Fila);
    void listarElementos(struct Fila F);

#ifdef __cplusplus
}
#endif

#endif /* FECIRCULARES_H */

