/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 3.1)implemente uma função que receba como parametro um vetor de número reais (vet) de tamanho n e retorne quantos números negativos estão armazenados nesse vetor. 
 Essa função deve obedecer ao prototipo: int negativos (int n, float* vet);
*/
#include <stdio.h>

int negativos (int n, float* vet) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (vet[i] < 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vet[i]);
    }

    int quantidade_negativos = negativos(n, vet);

    printf("Quantidade de números negativos no vetor: %d\n", quantidade_negativos);

    return 0;
}
