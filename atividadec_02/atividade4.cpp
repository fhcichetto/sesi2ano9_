#include <stdio.h>
#include <math.h>

int main() {
    float n; scanf("%f", &n);
    if (n > 0) {
        printf("Quadrado: %.2f\n", n*n);
        printf("Raiz: %.2f\n", sqrt(n));
    }
    return 0;
}
