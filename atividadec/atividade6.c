#include <stdio.h>
int main(void) {
    double c, f;
    scanf("%lf", &c);
    f = c * (9.0 / 5.0) + 32.0;
    printf("%.2f\n", f);
    return 0;
}
