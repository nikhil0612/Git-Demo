#include<stdio.h>
int main(){
    int first, second, Choice,n=0;
    do{
    
    printf("Enter Your Choice:- \n1.Enter 1 to add.\n2.Enter 2 to subtract.\n3.Enter 3 to multiply.\n4.Enter 4 to divide.\n  ");
    scanf("%d", &Choice);
    printf("Enter First Number: ");
    scanf("%d", &first);
    printf("Enter Second Number: ");
    scanf("%d", &second);
        switch(Choice){
        case 1:
        printf("The Addition of %d and %d is %d\n", first, second, first+second);
        break;
        case 2:
        printf("The Subtraction of %d and %d is %d\n", first, second, first-second);
        break;
        case 3:
        printf("The Multiplication of %d and %d is %d\n", first, second, first*second);
        break;
        case 4:
        printf("The Divsion of %d and %d is %d\n", first, second, first/second);
        break;
        default:
        printf("Enter a valid input.");
        break;
    }
    printf("Enter 1 to continue and 0 to exit \n");
    scanf("%d", &n);
    }while(n==1);

return 0;
}