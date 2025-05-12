
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

void arv_imprime_folhas(Arv* a){
    if(a==NULL) return ;

    if(a->esq==NULL && a->dir==NULL){
        printf("%c ",a->info);
        return ;
    }
    arv_imprime_folhas(a->esq);
    arv_imprime_folhas(a->dir);

}


int main()
{
    Arv *raiz = criaNo('A');
    raiz->esq = criaNo('B');
    raiz->dir = criaNo('C');
    raiz->esq->esq = criaNo('D');
    raiz->esq->dir = criaNo('E');
    raiz->dir->esq = criaNo('F');
   
  arv_imprime_folhas(raiz);
    
    return 0;
}