#include <stdio.h>

int main() {
    int a[50], rev[50];
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Reverse and save in another array
    for(i = 0; i < n; i++) {
        rev[i] = a[n - 1 - i];
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }

    return 0;
}
