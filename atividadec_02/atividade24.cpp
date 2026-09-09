#include <stdio.h>
#include <string.h>

int main(){float valor,taxa;char estado[3];scanf("%f %2s",&valor,estado);if(strcmp(estado,"MG")==0)taxa=.07;else if(strcmp(estado,"SP")==0)taxa=.12;else if(strcmp(estado,"RJ")==0)taxa=.15;else if(strcmp(estado,"MS")==0)taxa=.08;else{printf("Estado invalido\n");return 0;}printf("Preco final: %.2f\n",valor*(1+taxa));return 0;}
