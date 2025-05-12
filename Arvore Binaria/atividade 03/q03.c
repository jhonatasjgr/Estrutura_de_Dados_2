
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


int arv_pertence(Arv* a, char c){
  if(a == NULL) return 0;
  if(a->info == c) return 1;

  return arv_pertence(a->esq, c) || arv_pertence(a->dir, c);


}


int main()
{
    Arv *raiz = criaNo('A');
    raiz->esq = criaNo('B');
    raiz->dir = criaNo('C');
    raiz->esq->esq = criaNo('D');
    raiz->esq->dir = criaNo('E');
    raiz->dir->esq = criaNo('F');
   
    printf("Pertence a arvore? %d\n",arv_pertence(raiz, 'H'));
    
    return 0;
}