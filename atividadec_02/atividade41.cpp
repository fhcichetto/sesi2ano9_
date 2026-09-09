#include <stdio.h>

int main(){float peso,altura,imc;scanf("%f %f",&peso,&altura);imc=peso/(altura*altura);printf("IMC: %.2f\n",imc);if(imc<18.5)printf("Abaixo do peso\n");else if(imc<25)printf("Saudavel\n");else if(imc<30)printf("Peso em excesso\n");else if(imc<35)printf("Obesidade Grau I\n");else if(imc<40)printf("Obesidade Grau II (severa)\n");else printf("Obesidade Grau III (morbida)\n");return 0;}
