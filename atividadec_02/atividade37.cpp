#include <stdio.h>

int main(){int eh,em,sh,sm,chegada,saida,minutos,horas;float preco=0;scanf("%d %d",&eh,&em);scanf("%d %d",&sh,&sm);chegada=eh*60+em;saida=sh*60+sm;if(saida<chegada)saida+=1440;minutos=saida-chegada;horas=(minutos+59)/60;if(horas<=2)preco=horas*1.00;else if(horas<=4)preco=2*1.00+(horas-2)*1.40;else preco=2*1.00+2*1.40+(horas-4)*2.00;printf("Preco: R$ %.2f\n",preco);return 0;}
