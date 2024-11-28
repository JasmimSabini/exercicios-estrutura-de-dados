/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 2.1) Implemente uma função que retorne as raizes de uma equação do segundo grau do tipo ax^2 + bx + c = 0. Essa função deve obedecer o prototipo: 
 int raizes (float a, float b, float c, float* x1, float* x2); ssa função deve ter como retorno o numero de raizes reais e distintas da equação. 
 Se existirem valores reais, seus valores devem ser armazenadas 
 nas variaveis apontadas por x1 e x2.
*/
#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, float* x1, float* x2) {
    float delta = b * b - 4 * a * c;

    if(delta > 0) {
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
    else if(delta == 0) {
        *x1 = *x2 = -b / (2 * a);
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    float a, b, c;
    float x1, x2;
    int num_raizes;

    printf("Digite os coeficientes a, b e c da equação ax² + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);

    num_raizes = raizes(a, b, c, &x1, &x2);

    if (num_raizes == 2) {
        printf("A equação tem duas raízes reais e distintas: x1 = %.2f e x2 = %.2f\n", x1, x2);
    } else if (num_raizes == 1) {
        printf("A equação tem uma raiz real dupla: x1 = x2 = %.2f\n", x1);
    } else {
        printf("A equação não possui raízes reais.\n");
    }

    return 0;
}