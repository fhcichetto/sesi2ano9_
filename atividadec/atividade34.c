#include <stdio.h>
int main(void) {
    double raio;
    const double pi = 3.141592;
    scanf("%lf", &raio);
    printf("%.6f\n", pi * raio * raio);
    return 0;
}
