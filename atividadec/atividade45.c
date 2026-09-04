#include <stdio.h>
int main(void) {
    char letra;
    scanf(" %c", &letra);
    if (letra >= 'A' && letra <= 'Z')
        letra = letra + ('a' - 'A');
    printf("%c\n", letra);
    return 0;
}
