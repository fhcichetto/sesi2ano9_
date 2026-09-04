#include <stdio.h>
int main(void) {
    double c, l, p, custo;
    scanf("%lf %lf %lf", &c, &l, &p);
    custo = (2 * c + 2 * l) * p;
    printf("%.2f\n", custo);
    return 0;
}
