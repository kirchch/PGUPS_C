#include <stdio.h>

int main(void) {
    int a = 13;
    int bit_1 = 1, bit_2 = 2;
    int mask = (1 << bit_1) | (1 << bit_2);
    int result = a ^ mask;
    printf("result: %d\n", result);

    return 0;
}