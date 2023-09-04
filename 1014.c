#include <stdio.h>

int main(){
    int x;
    double y;
    double resultado;

    scanf("%d", &x);
    scanf("%lf", &y);

    resultado = x/y;

    printf("%.3f km/l\n", resultado);

    return 0;
}