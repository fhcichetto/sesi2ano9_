#include <stdio.h>

int main(){float altura,peso;char classe;scanf("%f %f",&altura,&peso);if(altura<1.20){if(peso<=60)classe='A';else if(peso<=90)classe='D';else classe='G';}else if(altura<=1.70){if(peso<=60)classe='B';else if(peso<=90)classe='E';else classe='H';}else{if(peso<=60)classe='C';else if(peso<=90)classe='F';else classe='I';}printf("Classificacao: %c\n",classe);return 0;}
