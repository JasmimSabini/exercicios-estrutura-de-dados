/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 4.1) implemente duas versões de uma função, seguindo as diferentes estrategias discutidas para alocar matrizes,
 que determine se uma matriz é simetrica quadrada ou não
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool matriz_simetrica_dinamica(int n, int **matriz) {
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++){
            if (matriz[i][j] != matriz[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}
int main() {
    int n;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &n);

    int** matriz = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int*)malloc(n * sizeof(int));
    }
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    if (matriz_simetrica_dinamica(n, matriz)) {
        printf("A matriz é simétrica.\n");
    } else {
        printf("A matriz não é simétrica.\n");
    }

    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}