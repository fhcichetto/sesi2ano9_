#include <stdio.h>
int main(void) {
    double r, g;
    const double pi = 3.14;
    scanf("%lf", &r);
    g = r * 180.0 / pi;
    printf("%.2f\n", g);
    return 0;
}
