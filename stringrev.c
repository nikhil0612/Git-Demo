// Write a program to reverse a given string.

#include<stdio.h>
int main(){
    int i=0;
char arr[]={'h','e','l','l','o'};
int size = sizeof(arr)/sizeof(arr[0]);

for(i=size-1; i>=0; i--){
    printf("%c ", arr[i]);
}

return 0;
}