//Write a program to find the second largest element in an integer array.

#include<stdio.h>
int main(){
    int temp;
    int arr[5]={5,11,7,15,10};
    for(int i=0; i<5; i++){                //Descending Order
        for(int j=0; j<5; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }  
    }

    printf("%d ", arr[1]);
       
return 0;
}