#include <stdio.h>
#include <math.h>

int main(){int n;scanf("%d",&n);if(n<0)printf("Numero invalido\n");else if(n==0)printf("Logaritmo nao definido\n");else printf("%.2f\n",log(n));return 0;}
