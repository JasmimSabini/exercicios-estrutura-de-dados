/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 1.2) Implemente uma função para verificar se um numero inteiro é primo ou não. A função deve retornar 1 se for primo ou retornar 0 se não for
siga o padrão: int primo (int n);
*/
#include <stdio.h>

int primo(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if(primo(numero)) {
        printf("O número %d é primo", numero);
    } else {
        printf("O número %d não é primo", numero);
    }

    return 0;
}
