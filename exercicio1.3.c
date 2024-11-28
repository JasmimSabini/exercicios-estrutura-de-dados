/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 1.3) Implemente uma função que retorne o enésimo numero da série de Fibonacci. deve seguir o padrão: int fibonacci (int n);
*/
#include <stdio.h>

int fibonacci(int n) {
    if (n == 1) {
        return 1;
    }
    
    if (n == 2) {
        return 1;
    }

    int a = 1, b = 1, c;

    for(int i = 3; i <= n; i++) {

    c = a + b;
    a = b;
    b = c;
    }

    return b;
}
int main() {
    int n;

    printf("Digite o termo da sequência: ");
    scanf("%d", &n);

    int resultado = fibonacci(n);
    printf("O termo %d da sequência de Fibonacci é: %d\n", n, resultado);

    return 0;
}