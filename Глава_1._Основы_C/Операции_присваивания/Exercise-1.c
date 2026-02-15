#include <stdio.h>

int main(void) {
    // 1. Обмен через третью переменную
    int a = 10, b = 5;
    int c = a;
    a = b;
    b = c;
    printf("1. Обмен через третью переменную\na = %d\nb = %d\n\n", a, b);

    // 2. Обмен без третьей переменной
    int x = 10, y = 5;
    x = x + y;
    y = x - y;
    x = x - y;
    printf("2. Обмен без третьей переменной\nx = %d\ny = %d\n\n", x, y);

    // 3. Обмен через операцию XOR
    int z = 10, q = 5;
    z ^= q;
    q = z ^ q;
    z ^= q;
    printf("3. Обмен через операцию XOR\nz = %d\ny = %d\n\n", z, q);

    // 4. Обмен с помощью одного выражения
    int d = 10, e = 5;
    e = d + e - (d = e);
    printf("4. Обмен с помощью одного выражения\nd = %d\ne = %d\n\n", d, e);

    return 0;
}