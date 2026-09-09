#include <stdio.h>

int main(){float a,b,c,media;scanf("%f %f %f",&a,&b,&c);if(a<0||a>10||b<0||b>10||c<0||c>10){printf("Nota invalida\n");return 0;}media=(2*a+3*b+5*c)/10;if(media<=2.9)printf("Reprovado\n");else if(media<=4.9)printf("Recuperacao\n");else printf("Aprovado\n");return 0;}
