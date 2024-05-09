#include <stdlib.h>
#include <stdio.h>

int main(void){
    int valor = 29;
    int *ptr;
    ptr = &valor;
    printf("Conteudo da variavel %d \n", valor);
    printf("endereco da variavel %x \n", &valor);
    printf("Conteudo da variavel ponteiro %x \n", ptr);
    return 0;
}