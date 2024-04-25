#include <stdio.h>
#include "quadra.h"
int main(){
    
    QuadradoEcubo meuQua = criarQuadrado(5.0, 3.0); 

    float quadrado = calcularQuadrado(meuQua);
    printf("O quadrado do meus numeros eh igual a: %.2f \n", quadrado);

    QuadradoEcubo meuCu = criarQuadrado(5.0, 3.0, 2.0); 

    float cubo = calcularCubo(meuCu);
    printf("O cubo do meus numeros eh igual a: %.2f \n", cubo);

    return 0;
}