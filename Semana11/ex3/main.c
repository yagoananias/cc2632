#include<stdio.h>
#include<stdlib.h>

#define LIN 4
#define COL 6

int main(int argc, char *argv[]) {
  int *mat;
  int i, j;

  mat=malloc(LIN*COL*sizeof(int));

  for(i=0; i<LIN; i++) {
    for (j=0 ; j < COL ; j++) {
      mat[(COL*i)+j]=0;
    }
    
  }
}