#include <stdio.h>

int main(){
    int arr[100],n,i;
    int sum = 0;
    float avg;
    
    printf("enter the number of elements:");
    scanf("%d",&n);
    
    printf("enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]); 
        sum += arr[i];
    }
    
    
    avg = (float)sum / n;
    
    printf("%.2f",avg);
    return 0;
}