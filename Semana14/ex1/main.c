#include <stdio.h>

int mult(int, int);

int main() {
  int num, lim;
  printf("Digite o valor inicial:\n");
  scanf("%d", &num);
  printf("Limite da multiplicacao:\n");
  scanf("%d", &lim);
  printf("Numeros multiplicados:\n");
  printf("%d", mult(num, lim));
  return 0;
}

int mult(int num, int lim) {
  while(lim != 0) {
    lim--;
    printf(" *%d", num);
    return num * (mult(num+1, lim));
  }
  printf(" = ");
  return 1;
}