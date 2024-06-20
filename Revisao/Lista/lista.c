#include <stdlib.h>
#include <stdio.h>

typedef struct No{
    int num;
    struct No *prox;
} no;

no *criar_no(){
    no *novo = (no*)malloc(sizeof(no));
    return novo;
}

no *insirir_no_inicio(no *lista, int dado){
    no *novo_no = criar_no(); // cria novo nó
    novo_no->num = dado;

    if(lista == NULL){
        lista = novo_no;
        novo_no->prox = NULL;
    } else {
        novo_no->prox = lista; // novo no recebe a lista, e a lista está apontando para o novo nó
        lista = novo_no;
    }
    return lista;
}
no *inserir_elemento_fim(no *lista, int dado){
    no *novo_fim = criar_no();
    novo_fim -> num = dado;

    if(lista == NULL){      //Unico elemento da lista
        lista = novo_fim;
        novo_fim -> prox = NULL;
    }else{
        no *aux = lista;

        while(aux -> prox != NULL){
            aux = aux -> prox;
        }

        novo_fim -> prox = NULL;
        aux -> prox = novo_fim;
    }
    return lista;
}

void imprimir_lista(no *lista){
    no *aux = lista;
    while(aux != NULL){
        printf("%d ", aux->num);
        aux = aux->prox;
    }
    printf("\n");
}

no *remover(no *lista, int dado){
    if(lista == NULL) return NULL;

       no *temp = lista;
       no *prev = NULL;

    if(temp != NULL && temp -> num == dado){
        lista = temp -> prox;   // Muda a cabeça da lista para proximo nó
        free(temp);             
        return lista;
       }

       while(temp != NULL && temp -> num != dado){
        prev = temp;
        temp = temp -> prox;
       }

       if(temp == NULL) return lista;

       prev -> prox = temp -> prox;
       return lista;
}

int main(){
    int x;

    no* Lista = NULL;
    Lista = insirir_no_inicio(Lista, 10);
    Lista = insirir_no_inicio(Lista, 20);
    Lista = inserir_elemento_fim(Lista, 30);
    imprimir_lista(Lista);
    printf("\n");
    printf("Digite o numero da lista que deseja apagar: ");
    scanf("%d", &x);

    Lista = remover(Lista, x);
    imprimir_lista(Lista);
    return 0;
}
