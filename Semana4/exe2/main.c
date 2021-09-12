#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    float Valores[100], sum = 0.0, avg;

    scanf("%d", &n);

    for (i = 0; i < n; ++i) {
        
        scanf("%f", &Valores[i]);
        sum += Valores[i];
    }

    avg = sum / n;
    printf("%.2f", avg);
    return 0;
}
