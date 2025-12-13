#include<stdio.h>

int main(){
    int arr[100], n, i;
    int positive = 0, negative = 0, even = 0, odd = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if(n > 100){
        printf("Array size exceeded!\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        
        if(arr[i] > 0)
            positive++;
        else if(arr[i] < 0)
            negative++;
        
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Even numbers: %d\n", even);
    printf("Odd numbers: %d\n", odd);
    
    return 0;
}
