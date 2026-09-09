#include <stdio.h>

int main(){float h,peso;char sexo;scanf("%f %c",&h,&sexo);if(sexo=='M'||sexo=='m')peso=(72.7*h)-58;else peso=(62.1*h)-44.7;printf("Peso ideal: %.2f\n",peso);return 0;}
