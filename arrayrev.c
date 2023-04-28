//Write a program to reverse the elements of an array.

#include<stdio.h>
void ArrayRev(int arr[]){
    int temp;
    for (int i=0; i<=7/2; i++){
        temp = arr[i];
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}
int main(){
    int i;
    int arr[7]={6,4,9,7,2,5,8};
    ArrayRev(arr); 
    printf("The array elements after reversed: ");

    for(i=0; i<7; i++){
        printf("%d ", arr[i]);
    }
return 0;
}




/*
    #include<stdio.h>
int main(){
    int i;
    int arr[5]={6,4,9,7,2};
    
    for(i=4; i>=0; i--){
        printf("%d ", arr[i]);  
    }
   
return 0;
}
*/
