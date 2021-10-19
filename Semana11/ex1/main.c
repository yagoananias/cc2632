#include<stdio.h>
#include<stdlib.h>

int main(void) {

  int lim;
  printf("Quantos alunos tem na sala?\n");
  scanf("%d", &lim);

  int *v;
  v = malloc(lim*sizeof(int));

  for(int i = 0; i < lim; i++){
    printf("Digite a nota do %d° aluno:", i);
    scanf("%d", v+i);
  }

  int soma = 0;

  for(int i = 0; i < lim; i++){
    soma += v[i];
  }

  printf("%d", lim);

  int media = soma/lim;
  
  printf("A média da sala é: %d", media);
  free(v);
}
