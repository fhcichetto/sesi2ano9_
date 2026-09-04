#include <stdio.h>
int main(void) {
    double salario, receber;
    scanf("%lf", &salario);
    receber = salario + salario * 0.05 - salario * 0.07;
    printf("%.2f\n", receber);
    return 0;
}
