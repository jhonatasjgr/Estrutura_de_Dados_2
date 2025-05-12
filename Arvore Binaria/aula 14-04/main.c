
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
}Node;

// Função para criar um novo nó
Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
int tamanho(Node* a){
    if(a!=NULL){
       return 1+tamanho(a->left)+tamanho(a->right);
    }
    return 0;
}
int altura(Node* a){
    if(a!=NULL){
        int left = altura(a->left);
        int right = altura(a->right);
       return 1 + ( left>right ? left:right);
    }
    return 0;
}
int main()
{
   struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    printf("A quantidade de nos e: %d\n",tamanho(root));
    printf("A altura da arvore e: %d\n",altura(root));

    return 0;
}