#include <stdio.h>
int main(void) {
    double valor_hora, horas, total;
    scanf("%lf %lf", &valor_hora, &horas);
    total = valor_hora * horas * 1.10;
    printf("%.2f\n", total);
    return 0;
}
