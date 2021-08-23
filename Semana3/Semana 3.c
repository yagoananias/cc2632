/***********************
* Semana 2 - Repetição e Seleção
* Prof. Leila
*/
#include <stdio.h> /* para printf() */
#include <stdlib.h> /* para system() */
#include <stdbool.h> /* para boolean() */
#include <locale.h> /* para acentuação */
//FOR SIMPLÃO
// Adicionar mais de um comando e adicionar chaves
/*int main(){
  int i;
  for(i=0; i<=10;i++) {
    printf("Oi, estou no passo %d\n",i);
  }
}*/

//TABUADA
/*int main(){
  int i,mult;
  for(i=1; i<=10; i++){
    mult = i*6;
    printf("\n%d X 6 = %4d", i, mult);
  }
}*/

/*int main(){
  // Repetição variando a <linha>
  for (int linha = 1; linha <= 3; linha++) {
    printf("Contador externo (linha): %d\n\n", linha); 
    // Repetição variando a <coluna>
    for (int coluna = 1; coluna <= 4; coluna++) {
      printf("\t\tContador interno (coluna): %d\n", coluna);
      }
      printf("\n");
    }
 }*/


//While SIMPLÃO
/*int main( ){

  int total = 0, num;
  
  while( total < 20 ) {
    printf( "Total = %d\n", total );
    
    printf( "Entre com um numero: " );
    scanf( "%d", &num );
    
    total += num;
  }
  
  printf( "Final total = %d\n", total );
}*/


//While aninhado
/*int main( ){
  
  int linha, coluna;
  
  linha = 1; 
  while (linha < 5)
  {
    coluna = 1; 
    while (coluna < 5)
    {
      printf( "%3d", linha * coluna );
      coluna += 1;
    }
    linha += 1;
    printf( "\n" );
  }
}*/

//Do - While 
/*int main()
{
    double number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    }
    while(number != 0.0);

    printf("Sum = %.2lf",sum);

    return 0;
}*/

/*int main()
{
    double number, sum = 0;

     while(number != 0.0){
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
     }
     printf("Sum = %.2lf",sum);

    return 0;
}*/

//Rand
/*int main () {
   int i, n;

   n = 5;
   
   // Print 5 random numbers from 0 to 49 
   for( i = 0 ; i < n ; i++ ) {
      printf("%d\n", rand() % 50);
   }
   
}*/

//Média
/*int main(){
  int i;
  double num,soma;
  for(i=1; i<=4; i++){
    printf("Entre a nota da prova %d:\n", i);
    scanf("%lf", &num);
    soma+=num;
  }
  printf("A media eh %.2f",soma/4);
}*/

//Multiplos de 3
/*int main(){
  int i=3;
  while(i<=100){
    printf("Multiplo de 3:\%4d\n", i);
    i+=3;
  }
}*/

//Loop infinito
/*int main(){
  while (1){
    printf("loop infinitoooo");
  }
}*/
/*int main(){
 for(;;){
    printf("loop infinitoooo");
  }
}*/

/*int main(){
 while(true){
    printf("loop infinitoooo");
  }
}*/

//GUSTAVO
/*int main(){
    int  result;
    while (result < 101){
        result++;
        while (result%3 == 0){
            printf("%d\n", result);
            break;
        }
    }
    
}*/

//IF SIMPLÃO
/*int main() {
    int number;

    printf("Digite um número: ");
    scanf("%d", &number);

    
    if (number < 0) 
        printf("Você digitou: %d.\n", number);
    
}*/

//IF aninhado com else
/*int main(void)
{
  int num;
  
  
  printf("Entre com um inteiro: ");
  scanf("%d", &num);
  if (num >= 0) {
    if (num % 2 == 0)
      printf("O numero e par e positivo\n");
    else
      printf("O numero e impar e positivo\n");      
  }
  else {
    if (num % 2 == 0)
      printf("O numero e par e negativo\n");
    else
      printf("O numero e impar e negativo\n");      
  }
}*/


//ELSE IF
/*int main() 
{
 int num; 
	 printf("Digite um número entre 1 e 11: \n"); 
	 scanf("%d", &num); 
	 if(num==0){ 
     printf("O número é NULO\n"); 
	 }else if(num<8){
     printf("O número é Menor que 8\n"); 
   }else if(num<11){
     printf("O número é maior que 7\n"); 
   }else{
     printf("O número está fora das condições criadas\n"); 
   }
}*/


//break
/*int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      
      if (number < 0.0) {
         break;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

   return 0;
}*/
//CONTINUE
/*int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {
         continue;
      }

      sum += number; // sum = sum + number;
   }

   printf("Sum = %.2lf", sum);

}*/
//SWITCH
int main() {
    char operator;
    double n1, n2;

    printf("Digite um operador (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Digite dois numeros: ");
    scanf("%lf %lf",&n1, &n2);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        default:
            printf("Error! Operador incorreto");
    }
}