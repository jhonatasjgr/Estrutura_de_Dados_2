
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

int arv_eh_folha(Arv* a){
    if (a == NULL) return 0;
    return (a->esq == NULL && a->dir == NULL);
}

int main()
{
    Arv *raiz = criaNo('A');
    raiz->esq = criaNo('B');
    raiz->dir = criaNo('C');
    raiz->esq->esq = criaNo('D');
    raiz->esq->dir = criaNo('E');
    raiz->dir->esq = criaNo('F');
   
    printf("A arvore é folha? %d\n", arv_eh_folha(raiz)); 
    
    return 0;
}