/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
1.4) Implemente uma função que faça a soma de n numeros naturais impares. O modelo a ser seguido é: int soma_impares (int n);
*/
#include <stdio.h>

int soma_impares(int n) {
    int soma = 0;
    int numero_impar = 1;

    for(int i = 0; i < n; i++) {
        soma += numero_impar;
        numero_impar += 2;
    }
    return soma;
}
int main() {
    int n;

    printf("Digite a quantidade de números ímpares para somar: ");
    scanf("%d", &n);

    int resultado = soma_impares(n);
    printf("A soma de %d numeros impares é: %d\n", n, resultado);

    return 0;
}

