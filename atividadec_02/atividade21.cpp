#include <stdio.h>

int main(){int op;float a,b;printf("Escolha a opcao: \n1 - Soma de 2 numeros.\n2 - Diferenca entre 2 numeros.\n3 - Produto entre 2 numeros.\n4 - Divisao entre 2 numeros.\n");scanf("%d",&op);if(op>=1&&op<=4)scanf("%f %f",&a,&b);switch(op){case 1:printf("%.2f\n",a+b);break;case 2:if(a>b)printf("%.2f\n",a-b);else printf("%.2f\n",b-a);break;case 3:printf("%.2f\n",a*b);break;case 4:if(b!=0)printf("%.2f\n",a/b);else printf("Denominador nao pode ser zero\n");break;default:printf("Opcao invalida\n");}return 0;}
