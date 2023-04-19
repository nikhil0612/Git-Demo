// Write a program to take a number as input from the user and print whether it is even or odd
#include <stdio.h>
    int main(){
    int number;
    printf("Enter a number to check Even or Odd: ");
    scanf("%d", &number);
    if(number%2==0){
        printf("The number entered %d is Even.", number);
    }
    else{
        printf("The number entered %d is Odd.", number);
    }
return 0;
}