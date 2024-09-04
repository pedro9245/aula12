#include <stdio.h>
int main() {
  int matricula;
  float a1, a2, media;
  printf("Digite sua matricula: ");
  scanf("%i", &matricula);

  printf("Digite sua nota da A1: ");
  scanf("%f", &a1);

  printf("Digite sua nota da A2: ");
  scanf("%f", &a2);
  media = (a1 + a2) / 2;

  printf("\nMatricula\tA1\tA2\tMedia\n");
  printf("%i\t\t%.1f\t%.1f\t%.1f\n", matricula, a1, a2, media);
  return 0;
}