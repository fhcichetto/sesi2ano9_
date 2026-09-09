#include <stdio.h>
#include <math.h>

int main() {
    float n; scanf("%f", &n);
    if (n >= 0) printf("%.2f\n", sqrt(n));
    else printf("Numero invalido\n");
    return 0;
}
