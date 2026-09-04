#include <stdio.h>
#include <math.h>
int main(void) {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%.2f\n", sqrt(x*x + y*y));
    return 0;
}
