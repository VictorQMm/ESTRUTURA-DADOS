#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int conteudo;
    struct no *esquerda, *direita;
} No;

// Estrutura árvore com um ponteiro para um nó
typedef struct {
    No *raiz;
} ArvB;

void inserirEsquerda(No *no, int valor);

void inserirDireita(No *no, int valor);

void inserir(ArvB *arvore, int valor) {
    if (arvore->raiz == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        arvore->raiz = novo;
    } else {
        inserirEsquerda(arvore->raiz, valor);
    }
}

void inserirEsquerda(No *no, int valor) {
    if (no->esquerda == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->esquerda = novo;
    } else {
        if (valor < no->esquerda->conteudo)
            inserirEsquerda(no->esquerda, valor);
        else
            inserirDireita(no->esquerda, valor);
    }
}

void inserirDireita(No *no, int valor) {
    if (no->direita == NULL) {
        No *novo = (No*)malloc(sizeof(No));
        novo->conteudo = valor;
        novo->esquerda = NULL;
        novo->direita = NULL;
        no->direita = novo;
    } else {
        if (valor > no->direita->conteudo)
            inserirDireita(no->direita, valor);
        else
            inserirEsquerda(no->direita, valor);
    }
}

int tamanho(No *raiz) {
    if (raiz == NULL)
        return 0;
    return 1 + tamanho(raiz->esquerda) + tamanho(raiz->direita);
}

void imprimir(No *raiz) {
    if (raiz != NULL) {
        imprimir(raiz->esquerda);
        printf("%d  ", raiz->conteudo);
        imprimir(raiz->direita);
    }
}

void display(No *raiz, int level) {
    if (raiz == NULL) return;
    display(raiz->direita, level + 1);
    for (int i = 0; i < level; i++) printf("    ");
    printf("%d\n", raiz->conteudo);
    display(raiz->esquerda, level + 1);
}

int main() {
    int op, valor;
    ArvB arv;
    arv.raiz = NULL;

    do {
        printf("\n0 - sair\n1 - inserir\n2 - imprimir\n3 - Buscar\n4 - Remover\n");
        scanf("%d", &op);
        switch (op) {
            case 0:
                printf("\nSaindo...\n");
                break;
            case 1:
                printf("Digite um valor: ");
                scanf("%d", &valor);
                inserir(&arv, valor); // passa endereço da raiz
                break;
            case 2:
                printf("\nImpressao da arvore binaria:\n");
                display(arv.raiz, 0);
                printf("\n");
                printf("Tamanho: %d \n", tamanho(arv.raiz));
                break;
        }
    } while (op != 0);

    return 0;
}