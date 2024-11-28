/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 3.4) implemente uma função que permita a avaliação de polinomios. por elexemplo, no polinomio 3x^2 + 2x + 12
 tera o vetor dos coeficientes igual a v[]= {12,2,3}. A função deve obedecer ao prototipo:
 double avalia (double* poli, int grau, double x);
*/
#include <stdio.h>
#include <math.h>

double avalia (double* poli, int grau, double x) {
    double resultado = poli[grau];

    for (int i = grau - 1; i >= 0; i--) {
        resultado = resultado * x + poli[i];
    }

    return resultado;
}
int main() {
    int grau;
    double x;

    printf("Digite o grau do polinômio: ");
    scanf("%d", &grau);

    double poli[grau + 1];

    printf("Digite os coeficientes do polinômio (do termo independente até o termo de grau máximo):\n");
    for (int i = 0; i <= grau; i++) {
        printf("Coeficiente do termo de grau %d: ", i);
        scanf("%lf", &poli[i]);
    }

    printf("Digite o valor de x para avaliar o polinômio: ");
    scanf("%lf", &x);

    double resultado = avalia(poli, grau, x);

    printf("O valor do polinômio para x = %.2f é: %.2f\n", x, resultado);

    return 0;
}
