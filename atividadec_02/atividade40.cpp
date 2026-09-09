#include <stdio.h>

int main(){float fabrica,comissao,imposto,total;scanf("%f",&fabrica);if(fabrica<=12000){comissao=.05;imposto=0;}else if(fabrica<=25000){comissao=.10;imposto=.15;}else{comissao=.15;imposto=.20;}total=fabrica+fabrica*comissao+fabrica*imposto;printf("Custo ao consumidor: %.2f\n",total);return 0;}
