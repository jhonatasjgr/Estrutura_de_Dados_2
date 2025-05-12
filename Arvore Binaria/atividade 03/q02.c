#include <stdio.h>
#include <stdlib.h>

struct arv {
char info;
struct arv* esq;
struct arv* dir;
};
typedef struct arv Arv;

// arv_arv_altura
Arv* criaNo(char c) {
    Arv* novo = (Arv*)malloc(sizeof(Arv));
    novo->info = c;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

int arv_altura(Arv* a) {
    if (a == NULL) return -1;
    
    int altEsq = arv_altura(a->esq); // tamanho do lado esquerdo
    int altDir = arv_altura(a->dir); // tamanho do lado direito
    
    // Se o lado esquerdo for maior, retorna o tamanho do lado esquerdo + 1 (para contar o nó atual)
    return (altEsq > altDir ? altEsq : altDir) + 1;

}

int main()
{
    Arv *raiz = criaNo('A');
    raiz->esq = criaNo('B');
    raiz->dir = criaNo('C');
    raiz->esq->esq = criaNo('D');
    raiz->esq->dir = criaNo('E');
    raiz->esq->esq->dir = criaNo('F');
    printf("arv_altura: %d\n", arv_altura(raiz));
    return 0;
}