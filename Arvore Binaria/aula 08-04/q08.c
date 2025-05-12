#include <stdio.h>
#include <stdlib.h>

typedef struct arv{
  char info;
  struct arv* esq;
  struct arv* dir;
} Arv;

Arv* cria_arvore(char c, Arv* e, Arv* d) {
  Arv* p = (Arv*) malloc(sizeof(Arv));
  p->info = c;
  p->esq = e;
  p->dir = d;
  return p;
}
int arvore_vazia(Arv* a) {
  return a == NULL;
}

void printar(Arv* a) {
  //saida <a<b<> <d<> >><c<e<> ><f<> >>>
 
  if(!arvore_vazia(a)){
    printf("<%c", a->info);
    if(!arvore_vazia(a->esq)){
      printar(a->esq);
    }else{
      printf("<>");
    }
    if(!arvore_vazia(a->dir)){
      printar(a->dir);
    }else{
      printf("<>");
    }
    printf(">");
  }
     
}
int main(){
  Arv* d = cria_arvore('d', NULL, NULL);
  Arv* b = cria_arvore('b', NULL, b);
  Arv* e = cria_arvore('e', NULL, NULL);
  Arv* f = cria_arvore('f', NULL, NULL);
  Arv* c = cria_arvore('c', e, f);
  Arv* a = cria_arvore('a', b, c);
  
  printar(a);
  printf("\n");
  
  return 0;
}
