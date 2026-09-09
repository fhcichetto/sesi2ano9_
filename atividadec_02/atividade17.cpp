#include <stdio.h>

int main(){float maior,menor,altura,area;scanf("%f %f %f",&maior,&menor,&altura);if(maior>0&&menor>0) {area=((maior+menor)*altura)/2;printf("Area: %.2f\n",area);}else printf("Bases invalidas\n");return 0;}
