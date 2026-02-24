#include <stdio.h>

int main(void) {
    int a = 10;
    int *b = &a;
    printf("Address: %p\nValue: %d\n", (void *)b, *b);
    return 0;
}