#include <stdio.h>

int main(void) {
    int mas[4] = {1, 2, 3, 4};
    mas[0] *= 2;
    mas[3] *= 2;
    size_t count = sizeof(mas) / sizeof(mas[0]);
    for (size_t i = 0; i < count; i++)
    {
        printf("%zu ", mas[i]);
    }
    
    return 0;
}