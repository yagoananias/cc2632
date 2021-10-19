#include<stdio.h>
#include<stdlib.h>

int main() {

  int *j;
  j=malloc(sizeof(int));

  *j=4;

  printf("%d \n", *j);

  printf("%lu\n", sizeof(int));
  printf("%lu\n", sizeof(double));
  printf("%lu\n", sizeof(char));
  printf("%lu\n", sizeof(float));
}

