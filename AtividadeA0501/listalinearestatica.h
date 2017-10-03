/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   listalinearestatica.h
 * Author: Alexandre
 *
 * Created on 2 de Outubro de 2017, 16:22
 */

#ifndef LISTALINEARESTATICA_H
#define LISTALINEARESTATICA_H



#ifdef __cplusplus
extern "C" {
#endif
#define MAX_ELEM 10
#define POS_FINAL -1

    struct Lista {
        int n;
        char elem[MAX_ELEM];
    };
    void iniciarLista(struct Lista*);
    char acessar(struct Lista, int);
    void alterar(struct Lista*, int, char);
    void inserir(struct Lista*, int, char);
    void remover(struct Lista*, int);
    void concatenar(struct Lista*, struct Lista*);
    void inverter(struct Lista*);
    struct Lista subLista(struct Lista, int, int);
    void inserirOrdenado(struct Lista*, char);
    void mostrarLista(struct Lista);
    int visualizar(struct Lista* l, char procurar, int data[]);
    struct Lista intercalar(struct Lista* lst1, struct Lista* lst2);
    void ordemCrescente(struct Lista* l);
    void palindromo(struct Lista l);
    void removerRepetidos(struct Lista* l);


#ifdef __cplusplus
}
#endif

#endif /* LISTALINEARESTATICA_H */

