#include<stdio.h>

int main(){
    int arr[4];
    int i;
    
    printf("Enter the elements:\n");
    for(i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }
    printf("The elements are:");
    for(i=0;i<4;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}