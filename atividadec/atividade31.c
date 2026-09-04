#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    printf("Antecessor: %d\nSucessor: %d\n", n-1, n+1);
    return 0;
}
