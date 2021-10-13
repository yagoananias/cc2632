#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data; //conteudo
  struct Node *next; //ponteiro para outro Node
};

//imprimir registro de uma lista ligada
void printList(struct Node *node) {
  while(node != NULL) {
    printf("%d\n", node->data);
    node = node->next;
  }
}

int main(void) {
  //ponteiros do tipo struct Node
  struct Node *head = NULL;
  struct Node *second;
  struct Node *third;

  //aloca memoria para cada um dos registros da lista
  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));

  //populando os registros e criando a lista
  //começando com a cabeça da lista
  head->data = 1;
  head->next = second;
  
  second->data = 2;
  second->next = third;
  
  third->data = 3;
  third->next = NULL;

  printList(head);

  return 0;
}
