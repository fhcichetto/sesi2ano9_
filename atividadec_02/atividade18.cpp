#include <stdio.h>

int main(){int op;float a,b;printf("1-Soma\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");scanf("%d",&op);scanf("%f %f",&a,&b);switch(op){case 1:printf("%.2f\n",a+b);break;case 2:printf("%.2f\n",a-b);break;case 3:printf("%.2f\n",a*b);break;case 4:if(b!=0)printf("%.2f\n",a/b);else printf("Divisao por zero\n");break;default:printf("Opcao invalida\n");}return 0;}
