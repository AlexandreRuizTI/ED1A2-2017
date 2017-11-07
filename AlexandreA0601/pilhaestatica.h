/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   cabeca.h
 * Author: Alexandre
 *
 * Created on 24 de Outubro de 2017, 21:13
 */

#ifndef CABECA_H
#define CABECA_H


#ifdef __cplusplus
extern "C" {
#endif

#define MAX_ELEM 10 // numero maximo de elementos na pilha
#define SIM 1
#define NAO 0
#define PILHA_VAZIA -1 // valor que indica pilha vazia, pode ser associado ao topo. Logo se topo = -1 -> Pilha Vazia
#define SUCESSO 0 // valor padrão de sucesso de execução
#define PILHA_CHEIA -2 // apelido que expresse Pilha cheia

    struct Pilha {
        int topo;
        int n;
        char elem[MAX_ELEM];
    };

    // -- Funções Referentes a operações exemplo ---
    int vazia(struct Pilha);
    int cheia(struct Pilha);
    void iniciarPilha(struct Pilha*);
    char obterTopo(struct Pilha);
    void listarElementos(struct Pilha);
    int inserir(struct Pilha*, char);
    char remover(struct Pilha*);
    void palindromo(struct Pilha);









#ifdef __cplusplus
}
#endif

#endif /* CABECA_H */

