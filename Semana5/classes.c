#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	double num[] = { -3, 5, 12, 89, 91, 94, 23, 34, 45, 76 };
	
	for(int i = 0; i < 10; i++) {
		printf("O valor do vetor v[%d] é %d\n", i, num[i]);
		
		printf("O valor do vetor v[%d] é %p\n", i, &num[i]);
	}
  
  return 0;
}
