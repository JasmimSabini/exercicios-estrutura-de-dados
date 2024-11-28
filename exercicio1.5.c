/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 1.5) Implemente uma função que faça a aproximação do valor de Pi, seguindo a formula de Leibniz. A função deve seguir o prototipo: double pi (int n);
*/
#include <stdio.h>

double pi(int n) {
    double soma = 0.0;

    for(int i = 0; i < n; i++) {
        soma += (double)((i % 2 == 0) ? 1 : -1) / (2 * i + 1);
    }
    return 4 * soma;
}
int main() {
    int termos;

    printf("Digite o numero de termos para a aproximação de pi: ");
    scanf("%d", &termos);

    double resultado = pi(termos);
    printf("A aproximação de pi com %d termos é: %.15f\n", termos, resultado);

    return 0;
}