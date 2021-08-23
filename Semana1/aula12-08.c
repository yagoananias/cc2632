#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1=0;
    float num2=0;
    float num3=0;
    float media=0;
    
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    media = ((num1*2)+(num2*3)+(num3*5))/10;
    printf("MEDIA = %.1f", media);
}
