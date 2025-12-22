#include<stdio.h>

int main(){
    int arr[100],n,i,j,k,temp;
    
    printf("enter the number of elements:");
    scanf("%d",&n);
    
    printf("enter the numbers:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter k value:");
    scanf("%d",&k);
    
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    
    printf("kth smallest = %d\n", arr[k - 1]);
    printf("kth largest = %d\n", arr[n - k]);
    
    return 0;
}