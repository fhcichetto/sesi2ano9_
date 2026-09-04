#include <stdio.h>
int main(void) {
    double g, r;
    const double pi = 3.14;
    scanf("%lf", &g);
    r = g * pi / 180.0;
    printf("%.2f\n", r);
    return 0;
}
