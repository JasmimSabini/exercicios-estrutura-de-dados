/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 3.3) implemente uma função que tenha como parametro um vetor de numeros inteiros (vet) de tamanho n e inverta a 
 ordem dos elementos armazenados nesse vetor. deve obedecer ao prototipo: void inverte (int n, int* vet);
*/
#include <stdio.h>

void inverte (int n, int* vet) {
    int temp;
    for (int i = 0; i < n / 2; i++) {
        temp = vet[i];
        vet[i] = vet[n - i - 1];
        vet[n - i - 1] = temp;
    }
}
int main() {
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    inverte(n, vet);

    printf("Vetor invertido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");

    return 0;
}
