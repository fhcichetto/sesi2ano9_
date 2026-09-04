#include <stdio.h>
int main(void) {
    double f, c;
    scanf("%lf", &f);
    c = 5.0 * (f - 32.0) / 9.0;
    printf("%.2f\n", c);
    return 0;
}
