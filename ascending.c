//Write a program to sort an array in ascending order.

#include<stdio.h>
int main(){
    int size, i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; ++i){
        for(j=i+1; j<size; ++j){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
  
    printf("The Ascending order of array: ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
return 0;
}