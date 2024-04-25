#ifndef RETAN_H_INCLUD
#define RETAN_H_INCLUD

typedef struct{
    float num;
    float num1;
    float num3;

}QuadradoEcubo;

QuadradoEcubo criarQuadrado (float num, float num1);
float calcularQuadrado(QuadradoEcubo);

QuadradoEcubo criarCubo (float num, float num1, float num2);
float calcularCubo(QuadradoEcubo);

#endif /*RETAN_H*/
