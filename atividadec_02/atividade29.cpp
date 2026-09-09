#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){int a,b,resposta,acertos=0,i; srand(time(NULL));for(i=1;i<=5;i++){a=rand()%100+1;b=rand()%100+1;printf("Qual e a soma de %d + %d? ",a,b);scanf("%d",&resposta);printf("Resposta correta: %d\n",a+b);if(resposta==a+b)acertos++;}printf("Acertos: %d\n",acertos);return 0;}
