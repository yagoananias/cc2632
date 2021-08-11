/***********************
* Semana 1 - Demonstração do main e algumas especificidades de C
* Prof. Leila
*/
#include <stdio.h> /* para printf() */
#include <stdlib.h> /* para system() */

//HELLO WORLD E TABULAÇAO
/*int main(){
  printf("\\Hello World!\\");
  printf("Hello World2!");
}*/

//VARIAVEIS
/*int main() {
      printf("Hello World, %d" , 2632) ;
}*/

/*int main() {
      printf("%s está a %d milhões de kms da Terra", "Venus", 20000000.5);
}*/

/* VARIAVEIS NUMERICAS
int main(){
  int num1;
  int num2;
  
  num1=44;
  num2=num1+20;

  printf("O primeiro numero eh %d \n", num1);
  printf ("O segundo numero eh %d \n", num2);
  printf ("O segundo numero eh %d \n", num1+20);
}*/

/* VARIAVEIS
int main()				
{
	int evento = 5;	
	char corrida = 'C'; 
	float tempo = 27.25;


	printf("\n O tempo vitorioso na eliminatória %c",corrida);
	printf(" \n da competição %d foi %f.", evento, tempo);
	return 0;			
}*/

/* PRECISAO
int main(){
  float num1;
  float num2;
  
  num1=44.55;
  num2=num1+20;

  printf("O primeiro numero eh %.2f\n", num1);
  printf ("O segundo numero eh %.2f \n", num2);
  printf ("O segundo numero eh %.1f \n", num1+20);
}*/


 //TABULAÇÃO
/*int main(){
  float num1;
  float num2;
  
  num1=44.55;
  num2=num1+20;

  printf("O primeiro numero eh %2.2f\n", num1);
  printf ("O segundo numero eh %8.2f \n", num2);
  printf ("O segundo numero eh %16.1f \n", num1+20);
}
*/
 //Endereço
/*int main(){
  int num1;
  
  num1=44;
  
  printf("O primeiro numero eh %d e o endereço é %p", num1, &num1);
  
}*/
//scanf
/*int main(){
  int num1;
  
  printf("Digite um numero:\n");
  scanf("%d",&num1);
  printf("O numero digitado é %d", num1);
  
}*/
//scanf
/*int main(){
  int anos, dias;
  
  printf("Digite s sua idade em anos:\n");
  scanf("%d",&anos);
  dias = anos*365;
  printf("Sua idade em dias é %d", dias);
  
}*/

/*int main(){
  float p1, p2, p3, media;
  
  printf("Digite as notas das provas:\n");
  scanf("%f%f%f",&p1, &p2, &p3);
  media=(p1+p2+p3)/3;
  printf("A média é %2.f", media);
  
}