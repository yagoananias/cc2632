#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data; //conteudo
  struct Node *next; //ponteiro para outro Node
};

int main(void) {
  struct Node *head = NULL;
  struct Node *second;
  struct Node *third;

  //aloca memoria para cada um dos registros da lista
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
}
