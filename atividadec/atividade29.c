#include <stdio.h>
int main(void) {
    double n1, n2, n3, n4;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    printf("%.2f\n", (n1+n2+n3+n4)/4.0);
    return 0;
}
