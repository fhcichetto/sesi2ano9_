#include <stdio.h>

int main(){float km,litros,consumo;scanf("%f %f",&km,&litros);consumo=km/litros;printf("Consumo: %.2f km/l\n",consumo);if(consumo<8)printf("Venda o carro!\n");else if(consumo<=14)printf("Economico!\n");else printf("Super economico!\n");return 0;}
