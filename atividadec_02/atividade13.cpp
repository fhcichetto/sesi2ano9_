#include <stdio.h>

int main(){float a,b,c,media;scanf("%f %f %f",&a,&b,&c);media=(a+b+2*c)/4;printf("Media: %.2f\n",media);if(media>=60)printf("Aprovado\n");else printf("Reprovado\n");return 0;}
