#include <stdlib.h>
#include <stdio.h>

int main(){
    int a=10, b=20;           //Declara a e b como variaveis do tipo inteiro
    int *p, *q;         //Declara p e q como variaveis do tipo ponteiro

    p=&a;       //p recebe endereco valor 10
    q=&b;       //q recebe endereco valor 20
    

    printf("%p %d \n"), &a, a;   //Mostra o endereço de "a" depois o valor  "10"
    printf("%p %d \n"), &b, b;  //Mostra o endereço de "b" depois o valor  "20"
    printf("%p %p %d \n"), &p, p, *p;   //Mostra endereço de "p" depois o valor "10", que foi alocado em "p" e por ultimo printa o endereço alocado em *p;
    printf("%p %p %d \n"), &q, q, *q;   //Mostra endereço de "q" depois o valor "20", que foi alocado em "q" e por ultimo printa o endereço alocado em *q;

    return 0;
}