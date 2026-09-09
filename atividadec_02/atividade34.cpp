#include <stdio.h>

int main(){float nota;int faltas;char conceito;scanf("%f %d",&nota,&faltas);if(nota>=9)conceito='A';else if(nota>=7.5)conceito='B';else if(nota>=5)conceito='C';else if(nota>=4)conceito='D';else conceito='E';if(faltas>20&&conceito<'E')conceito++;printf("Conceito: %c\n",conceito);return 0;}
