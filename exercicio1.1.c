/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 1.1) Implemente uma função que indique se um ponto (x,y) está localizado dentro ou fora de um retângulo. Obedecendo ao prototipo:
 int dentro_ret (int x0, int y0, int x1, int y1, int x, int y)
*/
#include <stdio.h>

int dentroDoRetangulo(float x0, float y0, float x1, float y1, float x, float y) {
    if (x >= x0 && x <= x1 && y >= y0 && y <= y1) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    float x0, x1, y0, y1;
    float x, y;

    printf("Digite as coordenadas do vértice inferior esquerdo do retângulo (x0, y0): ");
    scanf("%f %f", &x0, &y0);

    printf("Digite as coordenadas do vértice superior direito do retângulo (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordendas do ponto (x, y): ");
    scanf("%f %f", &x, &y);

    if (dentroDoRetangulo(x0, y0, x1, y1, x, y)) {
        printf("O ponto (%.1f, %.1f) está dentro do retângulo.\n", x, y);
    } else {
        printf("O ponto (%.1f, %.1f) está fora do retângulo.\n", x, y);
    }
    return 0;
}
