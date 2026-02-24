#include <stdio.h>

int main(void) {
    const long a = 100;
    const long *p = &a;
    char *const c = "Hello";
    printf("Constant: %ld\n", *p);
    printf("Const pointer: %s\n", c);
    return 0;
}