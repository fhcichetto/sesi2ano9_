#include <stdio.h>
#include <math.h>
int main(void) {
    double a, b, hipotenusa;
    scanf("%lf %lf", &a, &b);
    hipotenusa = sqrt(a*a + b*b);
    printf("%.2f\n", hipotenusa);
    return 0;
}
