#include <stdio.h>

int bissexto(int ano){return ano%400==0||(ano%4==0&&ano%100!=0);}
int main(){const int ANO_ATUAL=2008;int d,m,a,dias;scanf("%d %d %d",&d,&m,&a);if(a>ANO_ATUAL||m<1||m>12){printf("Data invalida\n");return 0;}if(m==2)dias=bissexto(a)?29:28;else if(m==4||m==6||m==9||m==11)dias=30;else dias=31;if(d>0&&d<=dias)printf("Data valida\n");else printf("Data invalida\n");return 0;}
