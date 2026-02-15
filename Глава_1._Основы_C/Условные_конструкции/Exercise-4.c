#include <stdio.h>

int main(void) {
    int x = 5;
    switch (x)
    {
    case 4:
        printf("x = 4");
        break;

    case 5:
        printf("x = 5");
        break;

    case 6:
        printf("x = 6");
        break;
    
    default: printf("x is undefined");
        break;
    }
        
    return 0;
}