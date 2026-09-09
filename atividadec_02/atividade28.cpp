#include <stdio.h>
#include <math.h>

int main(){int x,y,z,op;float resultado;scanf("%d %d %d",&x,&y,&z);printf("1-Geometrica\n2-Ponderada\n3-Harmonica\n4-Aritmetica\n");scanf("%d",&op);if(x<=0||y<=0||z<=0){printf("Valores invalidos\n");return 0;}switch(op){case 1:resultado=cbrt((double)x*y*z);printf("%.2f\n",resultado);break;case 2:resultado=(x+2*y+3*z)/6.0;printf("%.2f\n",resultado);break;case 3:resultado=1.0/(1.0/x+1.0/y+1.0/z);printf("%.2f\n",resultado);break;case 4:resultado=(x+y+z)/3.0;printf("%.2f\n",resultado);break;default:printf("Opcao invalida\n");}return 0;}
