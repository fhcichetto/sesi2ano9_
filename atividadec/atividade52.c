#include <stdio.h>
int main(void) {
    double a, b, c, premio, total, ga, gb, gc;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &premio);
    total = a + b + c;
    ga = premio * a / total;
    gb = premio * b / total;
    gc = premio * c / total;
    printf("Amigo 1: %.2f\nAmigo 2: %.2f\nAmigo 3: %.2f\n", ga, gb, gc);
    return 0;
}
