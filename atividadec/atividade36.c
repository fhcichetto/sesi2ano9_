#include <stdio.h>
int main(void) {
    double altura, raio, volume;
    const double pi = 3.141592;
    scanf("%lf %lf", &altura, &raio);
    volume = pi * raio * raio * altura;
    printf("%.6f\n", volume);
    return 0;
}
