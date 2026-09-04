#include <stdio.h>
int main(void) {
    double h, m;
    scanf("%lf", &h);
    m = h * 10000.0;
    printf("%.2f\n", m);
    return 0;
}
