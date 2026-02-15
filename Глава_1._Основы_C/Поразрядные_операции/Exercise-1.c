#include <stdio.h>

int main(void) {
    unsigned int a = 13;
    unsigned int bit_1 = (a >> 1) & 1;
    unsigned int bit_2 = (a >> 2) & 1;
    unsigned int xor = bit_1 ^ bit_2;
    unsigned int result = a ^ ((xor << 1) | (xor << 2));
    printf("Result: %d\n", result);

    return 0;
}