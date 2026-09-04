#include <stdio.h>
int main(void) {
    double total, desconto, parcela, comissao_avista, comissao_parcelada;
    scanf("%lf", &total);
    desconto = total * 0.90;
    parcela = total / 3.0;
    comissao_avista = desconto * 0.05;
    comissao_parcelada = total * 0.05;
    printf("Com desconto: %.2f\n", desconto);
    printf("Parcela (3x): %.2f\n", parcela);
    printf("Comissao a vista: %.2f\n", comissao_avista);
    printf("Comissao parcelada: %.2f\n", comissao_parcelada);
    return 0;
}
