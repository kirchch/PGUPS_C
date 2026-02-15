#include <stdio.h>

int main(void) {
    int x = 26, y = 34, z = 78;
    if (x > y && x > z)
    {
        printf("the largest number: %d", x);
    }
    else if (y > x && y > z)
    {
        printf("the largest number: %d", y);
    }
    else 
    {
        printf("the largest number: %d", z);
    }
    return 0;
}