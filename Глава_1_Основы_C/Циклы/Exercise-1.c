#include <stdio.h>

int main(void) {
    
    printf("Вывод при помощи цыкла For:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Hello Work\n");
    }

    printf("\nВывод при помощи цыкла While:\n");

    int j = 0;
    while (j < 5)
    {
        printf("Hello Work\n");
        j++;
    }
    
    return 0;
}