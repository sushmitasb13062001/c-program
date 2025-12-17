
#include <stdio.h>

int main() {
    int arr[100],n,i,key;
    int mid,low,high;
    
    printf("enter the size of elements: ");
    scanf("%d",&n);
    
    low = 0;
    high = n-1;
    
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter the elements to search:");
    scanf("%d",&key);
    
    while(low<=high){
        mid = (low + high)/2;
    
    if(arr[mid] == key){
        printf("element found at the index %d",mid);
        return 0;
    }
    else if(arr[mid]<key){
        low = mid + 1;
    }
    else{
        high = mid - 1;
    }
    }
    
    printf("Element not found!");
    return 0;
}