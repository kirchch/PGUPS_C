#include <stdio.h>

int main(void) {

    for (int i = 11; i <= 20; i++)
    {
        if(i % 2 == 1) printf("%d ", i);
    }
    
    return 0;
}