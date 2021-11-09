#include <stdio.h>

int soma(int n);
int main(void) {
  int num = 10;
  printf("Soma de %d =  %d", num, soma(num));

  return 0;
}

// soma recursiva
int soma(int n) {
  if(n == 0) {
    printf("Condicao de parada encontrada! Saindo da recursao!\n");
    return 1;
  } else {
    printf("Chamada recursiva para n = %d\n", n);
    return n + soma(n - 1);
  }
}