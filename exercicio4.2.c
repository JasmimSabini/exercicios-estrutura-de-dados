/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 4.2) implemente um TAD, minimizando o espaço de memoria utilizado, para representar uma matriz triangular inferior. nesse tipo de matriz,
 todos os elementos acima da diagonal tem valor zero.
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *elementos;
    int n;
} MatrizTriangularInferior;

MatrizTriangularInferior *cria_matriz(int n)
{
    MatrizTriangularInferior *matriz = (MatrizTriangularInferior *)malloc(sizeof(MatrizTriangularInferior));
    matriz->n = n;
    matriz->elementos = (int *)malloc(n * (n + 1) / 2 * sizeof(int));
    return matriz;
}

void libera_matriz(MatrizTriangularInferior *matriz)
{
    free(matriz->elementos);
    free(matriz);
}

int calcula_indice(int i, int j)
{
    return i * (i + 1) / 2 + j;
}

void define_elemento(MatrizTriangularInferior *matriz, int i, int j, int valor)
{
    if (i < j)
    {
        printf("Erro: Não é possível definir elementos acima da diagonal principal em uma matriz triangular inferior.\n");
    }
    else
    {
        int indice = calcula_indice(i, j);
        matriz->elementos[indice] = valor;
    }
}

int obtem_elemento(MatrizTriangularInferior *matriz, int i, int j)
{
    if (i < j)
    {
        return 0;
    }
    else
    {
        int indice = calcula_indice(i, j);
        return matriz->elementos[indice];
    }
}

int main()
{
    int n;
    printf("Digite a ordem da matriz triangular inferior: ");
    scanf("%d", &n);

    MatrizTriangularInferior *matriz = cria_matriz(n);

    printf("Digite os elementos da matriz triangular inferior:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int valor;
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &valor);
            define_elemento(matriz, i, j, valor);
        }
    }

    printf("Matriz triangular inferior:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", obtem_elemento(matriz, i, j));
        }
        printf("\n");
    }

    libera_matriz(matriz);
    return 0;
}
