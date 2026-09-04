#include <stdio.h>
#include <math.h>
int main(void) {
    double altura_degrau, altura_objetivo;
    scanf("%lf %lf", &altura_degrau, &altura_objetivo);
    printf("%.0f\n", ceil(altura_objetivo / altura_degrau));
    return 0;
}
