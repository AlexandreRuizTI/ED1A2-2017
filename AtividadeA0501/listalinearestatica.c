
#include "listalinearestatica.h"

void iniciarLista(struct Lista* lst) {
    int i;
    lst -> n = 0;
    for (i = 0; i < MAX_ELEM; i++) {
        lst->elem[i] = 0;
    }
}

char acessar(struct Lista lst, int k) {
    char dado = 0;
    if ((k < 0 || k > (lst.n - 1))) {
        printf("\n Erro ao acessar - Lista vazia ou índice fora dos limites");
    } else {
        dado = lst.elem[k];
    }
    return dado;
}

void alterar(struct Lista* lst, int k, char dado) {
    if ((k < 0 || k > (lst->n - 1))) {
        printf("\n Erro ao acessar - Lista vazia ou índice fora dos limites");
    } else {
        lst->elem[k] = dado;
    }
}

void inserir(struct Lista* lst, int k, char dado) {
    int i;
    if (lst->n >= MAX_ELEM) {
        printf("\n Erro ao inserir - Lista Cheia!");
    } else {
        if (k == POS_FINAL || lst->n == 0 || k == lst->n) {
            lst->elem[lst->n] = dado;
            lst->n++;
        } else {
            if ((k < 0 || k > (lst->n - 1))) {
                printf("\n Erro ao inserir na posicao k - Indice fora dos limites");
            } else {
                for (i = lst->n; i > k; i--) {
                    lst->elem[i] = lst->elem[i - 1];
                }
                lst->elem[k] = dado;
                lst->n++;
            }
        }
    }
}

void remover(struct Lista* lst, int k) {
    int i;
    if (k == POS_FINAL) {
        lst->elem[(lst->n) - 1] = 0;
        lst->n--;
    } else {
        if ((k < 0 || k > (lst->n - 1))) {
            printf("\n Erro ao inserir na posicao k - Indice fora dos limites");
        } else {
            for (i = k; i < lst->n; i++) {
                lst->elem[i] = lst->elem[i + 1];
            }
            lst->n--;
            lst->elem[lst->n] = 0;
        }
    }
}

void concatenar(struct Lista* lst1, struct Lista* lst2) {
    int i, limite;
    if ((lst1->n + lst2->n) <= MAX_ELEM)
        limite = lst2->n;
    else
        limite = MAX_ELEM - lst1->n;
    for (i = 1; i <= limite; i++) {
        lst1 ->elem[lst1->n] = lst2->elem[i - 1];
        lst1->n++;
    }
}

void inverter(struct Lista* lst) {
    int i;
    char aux;
    for (i = 0; i < (lst->n - 1) / 2; i++) {
        aux = lst ->elem[i];
        lst->elem[i] = lst ->elem[lst->n - (i + 1)];
        lst->elem[lst->n - (i + 1)] = aux;
    }
}

struct Lista subLista(struct Lista lst, int k, int n) {
    struct Lista result;
    int i;
    int limite;
    iniciarLista(&result);
    if ((k < 0 || k > (MAX_ELEM - 1))) {
        printf("\n Erro ao definir sublista - origem vazia ou inexistente");
    } else {
        if ((k + n) <= MAX_ELEM)
            limite = n;
        else
            limite = MAX_ELEM - k;
        for (i = 1; i <= limite; i++) {
            inserir(&result, POS_FINAL, lst.elem[k]);
            k++;
        }
    }
    return result;
}

void inserirOrdenado(struct Lista* lst, char e) {
    int k = 0;
    while ((e >= lst->elem[k])&& (k < lst->n)) {
        k++;
    }
    inserir(lst, k, e);
}

void mostrarLista(struct Lista lst) {
    int k;
    printf("\n >>>> Lista Caracteres <<<<<< \n");
    for (k = 0; k < (lst.n); k++) {
        printf("\n L[%d]=%c", k, lst.elem[k]);
    }
}
// LETRA B DO EXERCÍCIO A0501

int visualizar(struct Lista* l, char procurar, int data[]) {
    int i, m = 0;
    if (l->n == 0) {
        printf("\n Erro ao encontrar o nó, a lista pode estar vazia");
    } else {
        for (i = 0; i < l->n; i++) {
            if (l->elem[i] == procurar) {
                data[m] = i;
                m++;
            }
        }
    }
    return m;
}

struct Lista intercalar(struct Lista* lst1, struct Lista* lst2) {
    struct Lista resultado;
    iniciarLista(&resultado);
    int idx, idx1, idx2;
    for (idx = 0, idx1 = 0, idx2 = 0; idx1 < lst1 ->n && idx2 < lst2->n; idx = idx + 2) {
        inserir(&resultado, idx, lst1->elem[idx1]);
        inserir(&resultado, idx + 1, lst2->elem[idx2]);
        idx1++;
        idx2++;
    }
    while (idx1 < lst1->n) {
        inserir(&resultado, idx, lst1->elem[idx1]);
        idx++;
        idx1++;
    }
    while (idx2 < lst2->n) {
        inserir(&resultado, idx, lst2->elem[idx2]);
        idx++;
        idx2++;
    }
    return resultado;
}

void ordemCrescente(struct Lista* l) {
    int i;
    char aux;
    for (int x = 0; x < l->n; x++) {
        for (int y = x + 1; y < l->n; y++) {
            if (l->elem[x] > l->elem[y]) {
                aux = l->elem[x];
                l->elem[x] = l->elem[y];
                l->elem[y] = aux;
            }
        }
    }
}

/*EXERCÍCIO C A PARTIR DAQUI*/
void palindromo(struct Lista l) {
    struct Lista ver;
    iniciarLista(&ver);
    int i = 0, k = 0, cont = 0;
    for (i = 0; i < l.n; i++) {
        inserir(&ver, i, l.elem[i]);
    }
    inverter(&ver);
    for (k = 0; k < i; k++) {
        if (ver.elem[k] == l.elem[k]) {
            cont++;
        }
    }
    if (cont == i) {
        printf("\n\nEsta Lista é um Palíndromo!!\n");
    } else {
        printf("\n\nEsta Lista NÃO é um Palíndromo!!\n");
    }
}

void removerRepetidos(struct Lista* l) {
    for (int x = 0; x < l->n; x++) {
        for (int y = x + 1; y < l->n; y++) {
            if (l->elem[x] == l->elem[y]) {
                remover(l, y);
            }
        }
    }
}


