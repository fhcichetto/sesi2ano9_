#include <stdio.h>
int main(void) {
    double dias, bruto, liquido;
    scanf("%lf", &dias);
    bruto = dias * 30.0;
    liquido = bruto * 0.92;
    printf("%.2f\n", liquido);
    return 0;
}
