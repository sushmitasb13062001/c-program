
#include <stdio.h>

// Pass by VALUE functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

int main() {
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &choice);

    printf("\n Calculator (Pass by VALUE)\n");

    switch(choice) {
        case 1: printf("Result = %d\n", add(a, b)); break;
        case 2: printf("Result = %d\n", sub(a, b)); break;
        case 3: printf("Result = %d\n", mul(a, b)); break;
        case 4: printf("Result = %.2f\n", divide(a, b)); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
