#include <stdio.h>
#include <stdlib.h>
#define M_PI  3.14159265358979323846 

double calcularGrau(double rad){
    return (rad * 180)/ M_PI;
}

int main(){
    double angulo = 0;
    double radianos;
    printf("Digite o angulo em radianos:\n");
    scanf("%lf", &radianos);
    
    angulo = calcularGrau(radianos);
    
    printf("O angulo de %.6f radianos equivale a %.4f graus.", radianos, angulo);
    
}
