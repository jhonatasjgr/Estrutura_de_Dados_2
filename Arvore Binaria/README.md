# Estrutura de Dados - Árvore Binária

## 1. Introdução

Uma árvore binária é uma estrutura de dados hierárquica em que cada nó tem no máximo dois filhos, referidos como filho esquerdo e filho direito. As árvores binárias são amplamente utilizadas em diversas aplicações de computação devido à sua eficiência e simplicidade.

## 2. Conceitos Básicos

### 2.1 Nó
Um nó é um elemento único de uma árvore binária. Cada nó contém três componentes:
- **Valor**: O dado armazenado no nó.
- **Filho esquerdo**: Um ponteiro para o nó filho à esquerda.
- **Filho direito**: Um ponteiro para o nó filho à direita.

### 2.2 Raiz
A raiz é o nó no topo da árvore. É o único nó que não possui um pai.

### 2.3 Folha
Uma folha é um nó que não possui filhos.

### 2.4 Subárvore
Uma subárvore é uma parte da árvore que consiste em um nó e todos os seus descendentes.

## 3. Tipos de Árvores Binárias

### 3.1 Árvores Binárias Completas
Uma árvore binária completa é uma árvore em que todos os níveis, exceto possivelmente o último, estão completamente preenchidos, e todos os nós são o mais à esquerda possível.

### 3.2 Árvores Binárias Cheias
Uma árvore binária cheia é uma árvore em que todos os nós têm exatamente 0 ou 2 filhos.

### 3.3 Árvores Binárias Balanceadas
Uma árvore binária balanceada é uma árvore em que a altura das duas subárvores de qualquer nó nunca difere em mais de um.

## 4. Operações em Árvores Binárias

### 4.1 Inserção
A inserção envolve adicionar um novo nó à árvore binária. A posição de inserção depende do tipo de árvore binária (por exemplo, árvore binária de busca).

### 4.2 Deleção
A deleção envolve remover um nó da árvore binária. Existem três casos a considerar:
- O nó a ser removido é uma folha.
- O nó a ser removido tem um filho.
- O nó a ser removido tem dois filhos.

### 4.3 Busca
A busca envolve encontrar um nó específico na árvore. Em uma árvore binária de busca, isso é feito comparando o valor a ser buscado com os valores dos nós, começando pela raiz.

## 5. Travessia de Árvores Binárias

Existem três métodos principais de travessia de árvores binárias:

### 5.1 Pré-Ordem (Pre-Order)
Visita-se a raiz, depois a subárvore esquerda e, por fim, a subárvore direita.

### 5.2 Em-Ordem (In-Order)
Visita-se a subárvore esquerda, depois a raiz e, por fim, a subárvore direita.

### 5.3 Pós-Ordem (Post-Order)
Visita-se a subárvore esquerda, depois a subárvore direita e, por fim, a raiz.

## 6. Exemplos Práticos

### 6.1 Implementação de uma Árvore Binária em C

```c name=binary_tree.c
#include <stdio.h>
#include <stdlib.h>

// Definição do nó da árvore binária
typedef struct Node {
    int value;
    struct Node* left;
    struct Node* right;
} Node;

// Função para criar um novo nó
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Função para inserir um valor na árvore binária
Node* insert(Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->value) {
        root->left = insert(root->left, value);
    } else if (value > root->value) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Função para realizar a busca na árvore binária
Node* search(Node* root, int value) {
    if (root == NULL || root->value == value) {
        return root;
    }

    if (value < root->value) {
        return search(root->left, value);
    } else {
        return search(root->right, value);
    }
}

// Função para realizar a travessia em ordem (in-order traversal)
void inorderTraversal(Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->value);
        inorderTraversal(root->right);
    }
}

// Função principal para demonstrar a árvore binária
int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    int value = 40;
    Node* searchResult = search(root, value);
    if (searchResult != NULL) {
        printf("Value %d found in the tree.\n", value);
    } else {
        printf("Value %d not found in the tree.\n", value);
    }

    return 0;
}
```

## 7. Conclusão

As árvores binárias são uma estrutura de dados fundamental que oferece uma maneira eficiente de armazenar e manipular dados hierárquicos. A compreensão das operações básicas e dos diferentes tipos de árvores binárias é essencial para aproveitar ao máximo essa estrutura de dados.

Se você tiver alguma dúvida específica ou quiser explorar mais detalhes sobre algum tópico, sinta-se à vontade para perguntar!