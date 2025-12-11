#include<stdio.h>

int main(){
    int arr[5] = {5,5,5,5,5};
    int i;
    int sum =0;
    
    printf("The sum of all the elements are: ");
    for(i=0;i<5;i++){
        sum += arr[i];
    }
    
    printf("%d",sum);
    return 0;
}
