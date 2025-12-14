#include <stdio.h>

int main(){
int arr[100],copy[100];
int i,n;

printf("enter the number of elements:");
scanf("%d",&n);

printf("Enter the elements:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n;i++){
    copy[i] = arr[i];
}

printf("the copied elements are:");
for(i=0;i<n;i++){
    printf("%d",copy[i]);
}

return 0;
}