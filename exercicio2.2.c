/*
Nome da Aluna: Jasmim Sabini
Matricula:2023010360
Enunciado da Questão:
 2.2) Implemente uma função que calcule a área da superficie e do volume de uma esfera de raio r. Essa função deve obedecer ao prototipo:
 void calc_esfera (float r, float* area, float* volume);

 a area e o volume são dados, respectivamente, por 4r^2 e 4r^2/3.
*/

#define M_PI 3.14159265358979323846
#include <stdio.h>
#include <math.h>

void calc_esfera (float r, float* area, float* volume) {
    *area = 4 * M_PI * r * r;                  
    *volume = (4.0 / 3.0) * M_PI * r * r * r; 
}
int main() {
    float r, area, volume;

    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &r);

    calc_esfera(r, &area, &volume);

    printf("Área da superfície: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}