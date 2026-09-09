#include <stdio.h>

int main(){float antigo,novo;scanf("%f",&antigo);if(antigo<=50)novo=antigo*1.05;else if(antigo<=100)novo=antigo*1.10;else novo=antigo*1.15;printf("Preco novo: %.2f\n",novo);if(novo<=80)printf("Barato\n");else if(novo<=120)printf("Normal\n");else if(novo<=200)printf("Caro\n");else printf("Muito caro\n");return 0;}
