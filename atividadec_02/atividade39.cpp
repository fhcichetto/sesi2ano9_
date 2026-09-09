#include <stdio.h>

int main(){float salario,final;int anos;scanf("%f %d",&salario,&anos);if(salario<=500)final=salario*1.25;else if(salario<=1000)final=salario*1.20;else if(salario<=1500)final=salario*1.15;else if(salario<=2000)final=salario*1.20;else final=salario;if(anos>=1&&anos<=3)final+=100;else if(anos>=4&&anos<=6)final+=200;else if(anos>=7&&anos<=10)final+=300;else if(anos>10)final+=500;if(final==salario)printf("Funcionario nao tem direito a aumento\n");else printf("Salario final: %.2f\n",final);return 0;}
