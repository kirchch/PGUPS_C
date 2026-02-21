#include <stdio.h>

int main(void) {
    int a;
    double b;
    printf("Enter int: ");
    scanf("%d", &a);
    printf("Enter double: ");
    scanf("%lf", &b);
    printf("int: %d\ndouble: %lf\n", a, b);
    return 0;
}