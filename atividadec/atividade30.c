#include <stdio.h>
int main(void) {
    double reais, cotacao;
    scanf("%lf %lf", &reais, &cotacao);
    printf("%.2f\n", reais / cotacao);
    return 0;
}
