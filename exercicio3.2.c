/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 3.2) Implemente uma função que receba como parametro um vetor de numeros reais inteiros (vet) de tamanho n e retorne quantos numeros
 pares estão armazenados nesse vetor. deve obedecer ao prototipo: int pares (int n, float* vet);
*/
#include <stdio.h>

int pares (int n, float* vet) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if ((int)vet[i] % 2 == 0) {
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
    for(int i = 0; i < n; i++ ) {
        printf("Elemento %d: ", i + 1);
        scanf("%f", &vet[i]);
    }
    int quantidade_pares = pares(n, vet);

    printf("A quantidade de números pares dentro do vetor é:%d\n", quantidade_pares);

    return 0;
}