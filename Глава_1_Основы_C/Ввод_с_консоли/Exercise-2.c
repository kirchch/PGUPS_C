#include <stdio.h>

int main(void) {
    char buff[100];  
    int a = 0;
    double b = 0.0;

    printf("Enter int and double: ");
    
    if (fgets(buff, 100, stdin) !=NULL) {
        sscanf(buff, "%d %lf", &a, &b);
        printf("int: %d\tdouble: %lf\n", a, b);
    } else {
        printf("Error!\n");
    }
    
    return 0;
}