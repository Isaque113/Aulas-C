#include <stdio.h>

int main() {
  int n1 = 22;
  int n2 = 12;
  int n3 = 2;
  printf("Os números são:\n");
  printf("%d, %d, %d\n", n1, n2, n3);
  //media:
  float media = (n1 + n2 + n3 / 4);
  printf("A média é %f", media);
  return 0;
}