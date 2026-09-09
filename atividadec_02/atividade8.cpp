#include <stdio.h>

int main(){float a,b;scanf("%f %f",&a,&b);if(a<0||a>10||b<0||b>10)printf("Nota invalida\n");else printf("Media: %.2f\n",(a+b)/2);return 0;}
