#include <stdio.h>

int main() {
  int n1 = 10;
  int n2 = 7;
  int n3 = 8;
  int p1 = 1;
  int p2 = 2;
  int p3 = 3;
  float media_pond = (n1 * p1 + n2 * p2 + n3 * p3 / (p1 + p2 + p3));
  printf("Números:\n%d, %d, %d.\n", n1, n2, n3);
  printf("Pesos: \n%d, %d, %d.\n", p1, p2, p3);
  printf("Média ponderada:\n%f", media_pond);
  return 0;
}
