#include <stdio.h>
// Programa que obtenga el area de un rectángulo
int main(void)
{
  float base, altura, area;
  printf("Ingrese el valor de la base: ");
  scanf("%f", &base);
  printf("Ingrese el valor de la altura: ");
  scanf("%f", &altura);
  area = base * altura;
  printf("El area del rectangulo es de %.0f unidades", area);
  return 0;
}