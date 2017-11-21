
#ifndef FILAESTATICA_H
#define FILAESTATICA_H

#ifdef __cplusplus
extern "C" {
#endif
#define MAX_ELEM 10
#define VAZIA -1
#define SIM 1
#define NAO 0

    struct Fila {
        int comeco;
        int n;
        char elem[MAX_ELEM];
    };

    int filaVazia(struct Fila);
    int cheia(struct Fila);
    void iniciarFila(struct Fila*);
    char tdsElementos(struct Fila);
    void listarElementos(struct Fila);
    int inserir(struct Fila*, char);
    void remover(struct Fila*);



#ifdef __cplusplus
}
#endif

#endif /* FILAESTATICA_H */

