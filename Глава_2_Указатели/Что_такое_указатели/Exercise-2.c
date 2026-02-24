#include <stdio.h>

int main(void) {
    int a = 10;
    int *b = &a;
    printf("Before the change: %d\n", *b);
    *b = 74;
    printf("After the change: %d\n", *b);
    return 0;
}