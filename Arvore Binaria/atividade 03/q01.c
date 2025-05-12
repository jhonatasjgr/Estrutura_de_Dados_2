
#include <stdio.h>
#include <stdlib.h>
struct arv {
char info;
struct arv* esq;
struct arv* dir;
};
typedef struct arv Arv;

Arv* criaNo(char c) {
    Arv* novo = (Arv*)malloc(sizeof(Arv));
    novo->info = c;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

int arv_conta_nos(Arv* a) {
    if (a != NULL) {
        return 1 +  arv_conta_nos(a->esq) + arv_conta_nos(a->dir);
    }
    return 0;
}

int main()
{
    Arv *raiz = criaNo('A');
    raiz->esq = criaNo('B');
    raiz->dir = criaNo('C');
    raiz->esq->esq = criaNo('D');
    raiz->esq->dir = criaNo('E');
    raiz->dir->esq = criaNo('F');
    printf("quantidade de nós: %d\n",  arv_conta_nos(raiz));
    return 0;
}