/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   encadeadaDupla.h
 * Author: Alexandre
 *
 * Created on 23 de Novembro de 2017, 00:12
 */

#ifndef ENCADEADADUPLA_H
#define ENCADEADADUPLA_H

#ifdef __cplusplus
extern "C" {
#endif

    struct noDuplo {
        int dado;
        struct noDuplo *proximo;
        struct noDuplo *anterior;
    };

    void montarDuplo();
    void listarDuplo();
    void removerNo();
    void inserirNo();

#ifdef __cplusplus
}
#endif

#endif /* ENCADEADADUPLA_H */

