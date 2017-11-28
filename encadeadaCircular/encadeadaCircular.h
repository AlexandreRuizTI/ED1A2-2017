/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   encadeada1.h
 * Author: Alexandre
 *
 * Created on 22 de Novembro de 2017, 23:24
 */

#ifndef ENCADEADA1_H
#define ENCADEADA1_H

#ifdef __cplusplus
extern "C" {
#endif

    struct no {
        int informacao;
        struct no *proximo;
        struct no *iniciar;

    };

    void iniciarCircular();
    void mostrarCircular(int);
    void removerNo();
    void inserirNo();



#ifdef __cplusplus
}
#endif

#endif /* ENCADEADA1_H */

