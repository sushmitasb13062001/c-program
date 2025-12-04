#include <stdio.h>

int main() {
    int a = 10, b = 3;

    // Arithmetic
    printf("Arithmetic: %d %d %d %d %d\n", a+b, a-b, a*b, a/b, a%b);

    // Relational
    printf("Relational: %d %d %d %d %d %d\n", a==b, a!=b, a>b, a<b, a>=b, a<=b);

    // Logical
    printf("Logical: %d %d %d\n", (a>5 && b<5), (a<5 || b<5), !(a==10));

    // Bitwise
    printf("Bitwise: %d %d %d %d %d\n", (a&b), (a|b), (a^b), (a<<1), (a>>1));

    // Assignment
    int x = a;   // simple assignment
    x += 5;      // addition assignment
    x -= 2;      // subtraction assignment
    printf("Assignment: %d\n", x);

    // Increment / Decrement
    int y = 5;
    printf("Inc/Dec: %d %d %d %d\n", y++, y, ++y, y--);

    // Ternary
    int max = (a > b) ? a : b;
    printf("Ternary: %d\n", max);

    return 0;
}
