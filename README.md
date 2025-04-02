# Estrutura de Dados 2

## Ementa
- **Algoritmos de ordenação**
  - Conceitos e implementação de algoritmos de ordenação.
  
- **Estruturas de dados hierárquicos**
  - Introdução e conceito de estruturas de dados hierárquicos.
  
- **Árvores: terminologia, navegação, acesso e representação**
  - Definição e terminologia de árvores.
  - Métodos de navegação em árvores.
  - Técnicas de acesso e representação de árvores.

- **Árvore binária e árvore binária de busca**
  - Conceitos e propriedades de árvores binárias.
  - Implementação e manipulação de árvores binárias de busca.

- **Percurso em Árvore**
  - Métodos de percurso em árvores (Pré-ordem, Em-ordem, Pós-ordem).

- **Inserção e Remoção**
  - Técnicas de inserção e remoção de nós em árvores.

- **Balanceamento em Árvore**
  - Conceitos e técnicas de balanceamento de árvores.

- **Árvores Múltiplas**
  - Definição e manipulação de árvores múltiplas.

- **Grafos**
  - Conceitos básicos de grafos.
  - Representação e manipulação de grafos.

## Descrição dos Conteúdos

### Algoritmos de Ordenação
Algoritmos de ordenação são procedimentos utilizados para rearranjar elementos de uma lista ou array em uma determinada ordem (geralmente crescente ou decrescente). Eles são fundamentais em ciência da computação e têm diversas aplicações práticas.

#### Exemplos de Algoritmos
- **Bubble Sort**: Simples, mas ineficiente para listas grandes.
- **Selection Sort**: Seleciona o menor elemento e o coloca na posição correta.
- **Insertion Sort**: Insere elementos em uma lista já ordenada.
- **Merge Sort**: Utiliza a técnica de divisão e conquista.
- **Quick Sort**: Também utiliza divisão e conquista, mas é geralmente mais rápido que o Merge Sort.
- **Heap Sort**: Baseado em uma estrutura de dados chamada heap.

### Estruturas de Dados Hierárquicos
Estruturas de dados hierárquicos são aquelas que representam relações hierárquicas entre elementos. Elas são cruciais para modelar sistemas onde os dados têm uma relação de "contém" ou "é um componente de".

#### Exemplos
- **Árvores**: Estruturas que consistem em nós com filhos, formando uma hierarquia.
- **Grafos**: Estruturas que consistem em vértices conectados por arestas, podendo representar relações complexas.

### Árvores: Terminologia, Navegação, Acesso e Representação
Árvores são uma estrutura de dados hierárquica onde cada nó pode ter zero ou mais nós filhos. Elas são amplamente usadas para representar dados estruturados.

#### Terminologia
- **Raiz**: O nó no topo da árvore.
- **Folha**: Um nó que não tem filhos.
- **Subárvore**: Uma árvore formada por um nó e seus descendentes.

#### Navegação
Métodos para percorrer os nós de uma árvore, como:
- **Pré-Ordem (Pre-Order)**: Visita a raiz antes das subárvores.
- **Em-Ordem (In-Order)**: Visita a subárvore esquerda, depois a raiz, e depois a subárvore direita.
- **Pós-Ordem (Post-Order)**: Visita as subárvores antes da raiz.

#### Acesso e Representação
- **Acesso**: Métodos para encontrar ou modificar nós na árvore.
- **Representação**: Formas de armazenar árvores em memória, como listas de adjacência ou nós com ponteiros.

### Árvore Binária e Árvore Binária de Busca
Uma árvore binária é uma árvore em que cada nó tem no máximo dois filhos. Uma árvore binária de busca (BST) é uma árvore binária onde cada nó segue a propriedade: todos os nós na subárvore esquerda têm valores menores, e todos os nós na subárvore direita têm valores maiores.

### Percurso em Árvore
Percurso em árvore refere-se aos métodos de visitar todos os nós de uma árvore em uma ordem específica (pré-ordem, em-ordem, pós-ordem).

### Inserção e Remoção
Operações de inserção e remoção são fundamentais para manter a estrutura da árvore. A inserção adiciona novos nós, e a remoção elimina nós existentes, possivelmente reorganizando a árvore para manter suas propriedades.

### Balanceamento em Árvore
Balanceamento em árvore envolve técnicas para manter a altura da árvore mínima para garantir operações eficientes. Exemplos incluem árvores AVL e árvores rubro-negras.

### Árvores Múltiplas
Árvores múltiplas são árvores onde cada nó pode ter mais de dois filhos. Elas são usadas em aplicações como sistemas de arquivos e bancos de dados.

### Grafos
Grafos são estruturas de dados que consistem em um conjunto de vértices e um conjunto de arestas conectando pares de vértices. Eles são usados para modelar relações complexas entre dados.

#### Tipos de Grafos
- **Grafo Simples**: Não tem laços ou arestas múltiplas.
- **Grafo Direcionado**: As arestas têm uma direção.
- **Grafo Ponderado**: As arestas têm pesos associados.

#### Aplicações
- **Redes de Computadores**: Modelagem de conexões entre dispositivos.
- **Redes Sociais**: Representação de relações entre usuários.
- **Roteamento**: Encontrar caminhos em mapas ou redes.

## Objetivos da Disciplina
- Compreender e implementar algoritmos de ordenação.
- Entender e utilizar estruturas de dados hierárquicos.
- Manipular e navegar em diferentes tipos de árvores.
- Implementar operações de inserção, remoção e balanceamento em árvores.
- Trabalhar com árvores múltiplas e grafos.

## Recursos
- [Livro 1](https://github.com/jhonatasjgr/Estrutura_de_Dados_1/blob/main/livros/Estruturas%20de%20Dados%20Usando%20C%20(Tenenbaum).pdf)
- [Livro 2](https://github.com/jhonatasjgr/Estrutura_de_Dados_1/blob/main/livros/introduao%20a%20estrutura%20de%20dados-waldemar%20celes.pdf)
- [Documentação Adicional]()

## Estrutura das Aulas
1. Introdução aos Algoritmos de Ordenação
2. Estruturas de Dados Hierárquicos
3. Terminologia e Navegação em Árvores
4. Árvores Binárias e Árvores Binárias de Busca
5. Percurso em Árvores
6. Inserção e Remoção em Árvores
7. Balanceamento em Árvores
8. Árvores Múltiplas
9. Introdução a Grafos
10. Representação e Manipulação de Grafos
