#include <stdio.h>
int main(void) {
    double premio = 780000.0;
    double primeiro = premio * 0.46;
    double segundo = premio * 0.32;
    double terceiro = premio - primeiro - segundo;
    printf("Primeiro: %.2f\nSegundo: %.2f\nTerceiro: %.2f\n", primeiro, segundo, terceiro);
    return 0;
}
