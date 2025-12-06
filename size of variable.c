
#include <stdio.h>

int main() {
    printf("Size of char: %zu byte(s)\n", sizeof(char));
    printf("Size of unsigned char: %zu byte(s)\n", sizeof(unsigned char));
    printf("Size of short: %zu byte(s)\n", sizeof(short));
    printf("Size of unsigned short: %zu byte(s)\n", sizeof(unsigned short));
    printf("Size of int: %zu byte(s)\n", sizeof(int));
    printf("Size of unsigned int: %zu byte(s)\n", sizeof(unsigned int));
    printf("Size of long: %zu byte(s)\n", sizeof(long));
    printf("Size of unsigned long: %zu byte(s)\n", sizeof(unsigned long));
    printf("Size of long long: %zu byte(s)\n", sizeof(long long));
    printf("Size of unsigned long long: %zu byte(s)\n", sizeof(unsigned long long));

    printf("Size of float: %zu byte(s)\n", sizeof(float));
    printf("Size of double: %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));

    printf("Size of void pointer: %zu byte(s)\n", sizeof(void *));
    printf("Size of int pointer: %zu byte(s)\n", sizeof(int *));
    printf("Size of char pointer: %zu byte(s)\n", sizeof(char *));

    return 0;
}