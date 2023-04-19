#include <stdio.h>

    int main(){
    int num, fact=1;
    printf("Enter a number to find the factorial: ");
    scanf("%d", &num);
    // for(int i=0; i<=num; i++){
      
    //     }
        
    for(int i=2;i<=num;i++){
        if(num==0 || num==1){
        printf("The factorial of %d\n", fact);
    }
    else {
        fact=fact*i;
    }
    }
    printf("The factorial of %d is %d\n", num, fact);
return 0;
}
/*
    #include <stdio.h>
    int factorial(int num);
    int main(){
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        printf("The factorial of %d is %d",num, factorial(num));
return 0;
}

int factorial(int num){
    if(num==0 || num==1){
        return 1;
    }
    else{
        return (num*factorial(num-1));
    }
}
*/
