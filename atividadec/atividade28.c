#include <stdio.h>
int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.2f\n", a*a + b*b + c*c);
    return 0;
}
