#include <stdio.h>

int main() {
  int arr[100],n,i,key;
  int found = 0;
  
  
  printf("Enter the number of elements:");
   scanf("%d",&n);

  
  printf("Enter the elements:");
  for(i=0;i<n;i++){
  scanf("%d",&arr[i]);
  }
  printf("Enter the element to search:");
  scanf("%d",&key);
  
  for(i=0;i<n;i++){
      if(arr[i] == key){
        printf("the searched element is %d:",key);
        found = 1;
        break;
      }
  }
  
  if(found == 0){
      printf("The enterd element could not be found!");
  }
 
    return 0;
}