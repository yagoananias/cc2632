#include <stdio.h>

double fatorial(int n);
int main(void) {
  int num = 10;
  printf("Fatorial de %d =  %.0lf", num, fatorial(num));

  return 0;
}

// fatorial recursivo
double fatorial(int n) {
  if(n <= 1) {
    printf("Condicao de parada encontrada! Saindo da recursao!\n");
    return 1;
  } else {
    printf("Chamada recursiva para n = %d\n", n);
    return n * fatorial(n-1);
  }
}