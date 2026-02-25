#include <stdio.h>

int main(void) {
    int mas[] = {1, 2, 3, 4, 5};
    int *p = mas;
    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }
}