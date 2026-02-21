#include <stdio.h>

int main(void) {
    int mas[5] = {1, 2, 3, 4, 5};
    size_t n = sizeof(mas) / sizeof(mas[0]);
    for (int i = 0; i < n/2; i++)
    {
        int b = mas[i];
        mas[i] = mas[n - i - 1];
        mas[n - i - 1] = b;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", mas[i]);
    }
    return 0;
}