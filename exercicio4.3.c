/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 4.3) implemente um tad, minimizando o espaço de memoria utilizado, para representar uma matriz triangular superior.
 Em uma matriz triangular superior, todos os elementos abaixo da diagonal têm valor zero
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int *elems;
    int n;
} MatrizTriSup;

MatrizTriSup *cria_matriz(int n)
{
    MatrizTriSup *m = (MatrizTriSup *)malloc(sizeof(MatrizTriSup));
    m->n = n;
    m->elems = (int *)malloc(n * (n + 1) / 2 * sizeof(int));
    return m;
}

void libera_matriz(MatrizTriSup *m)
{
    free(m->elems);
    free(m);
}

int calcula_indice(int i, int j, int n)
{
    return (i * n - (i - 1) * i / 2) + (j - i);
}

void define_elem(MatrizTriSup *m, int i, int j, int valor)
{
    if (i > j)
    {
        printf("Erro: Elemento inválido.\n");
    }
    else
    {
        int ind = calcula_indice(i, j, m->n);
        m->elems[ind] = valor;
    }
}

int obtem_elem(MatrizTriSup *m, int i, int j)
{
    if (i > j)
    {
        return 0;
    }
    else
    {
        int ind = calcula_indice(i, j, m->n);
        return m->elems[ind];
    }
}

int main()
{
    int n;
    printf("Digite a ordem da matriz triangular superior: ");
    scanf("%d", &n);

    MatrizTriSup *m = cria_matriz(n);

    printf("Digite os elementos:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int valor;
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &valor);
            define_elem(m, i, j, valor);
        }
    }

    printf("Matriz triangular superior:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", obtem_elem(m, i, j));
        }
        printf("\n");
    }

    libera_matriz(m);
    return 0;
}
