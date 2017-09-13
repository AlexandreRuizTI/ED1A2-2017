/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Conta.h
 * Author: Alexandre
 *
 * Created on 31 de Agosto de 2017, 15:34
 */

#ifndef CONTA_H
#define CONTA_H
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

    typedef struct {
        char nomeCliente[31];
        int numConta;
        float saldo;
    } dadoConta;




    float abrirConta(dadoConta*);
    float lancaCredito(dadoConta*);
    float lancaDebito(dadoConta*);
    void saldo(dadoConta*);




#ifdef __cplusplus
}
#endif


#endif /* CONTA_H */

