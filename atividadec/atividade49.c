#include <stdio.h>
int main(void) {
    int hora, minuto, segundo, duracao, total;
    scanf("%d %d %d %d", &hora, &minuto, &segundo, &duracao);
    total = hora * 3600 + minuto * 60 + segundo + duracao;
    total %= 24 * 3600;
    hora = total / 3600;
    minuto = (total % 3600) / 60;
    segundo = total % 60;
    printf("%02d:%02d:%02d\n", hora, minuto, segundo);
    return 0;
}
