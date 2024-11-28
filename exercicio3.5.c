/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 3.5) Implemente uma função que calcule a derivada de um polinomio. deve se seguir o prototipo: 
 void deriva (double* poli, int grau, double* out);
 onde out é o vetor, de dimensão grau -1, no qual a função deve armazenar o coeficientes do polinomio resultante da derivada 
*/
#include <stdio.h>
#include <stdlib.h>

void deriva(double* poli, int grau, double* out) {
    for (int i = 1; i <= grau; i++) {
        out[i - 1] = i * poli[i];
    }
}
int main() {
    int grau; 

    printf("Digite o grau do polinômio: ");
    scanf("%d", &grau);

    double poli[grau + 1];
    double out[grau];

     printf("Digite os coeficientes do polinômio (do termo independente até o termo de grau máximo):\n");
     for(int i = 0; i <= grau; i++) {
        printf("Coeficiente do termo de de grau %d: ", i);
        scanf("%lf", &poli[i]);
     }
     deriva(poli, grau, out);

     printf("Os coeficientes da derivada do polinômio são:\n");
    for (int i = 0; i < grau; i++) {
        printf("Coeficiente do termo de grau %d: %.2f\n", i, out[i]);
    }

    return 0;
}