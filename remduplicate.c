//Write a program to remove duplicate elements from an array.
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

    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<size; k++){
                    arr[k]=arr[k+1];
                }
                size=size-1;
                j=j-1;
            }
        }
    }
    
    printf("After removing the duplicate elements the array is: ");
    for(i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
return 0;
}

/*for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]!=arr[j]){

            }
        }
    }*/