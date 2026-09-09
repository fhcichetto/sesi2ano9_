#include <stdio.h>

int main() {
    int a,b,maior,diferenca; scanf("%d %d",&a,&b);
    if(a>b){maior=a; diferenca=a-b;} else {maior=b; diferenca=b-a;}
    printf("Maior: %d\nDiferenca: %d\n",maior,diferenca); return 0;
}
