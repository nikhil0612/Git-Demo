//Write a program to calculate the sum of the first n natural numbers.
#include <stdio.h>

    int main(){
    int num,sum;
    printf("Enter a number to print the sum upto the entered no.: ");
    scanf("%d", &num);
    
    sum = (num*(num+1)/2);
    printf("The sum of %d natural no. is %d\n", num, sum);
return 0;
}


/*#include <stdio.h>

    int main(){
   int num, sum=0, i;
    printf("Enter a number to print the sum upto the entered no.: ");
    scanf("%d", &num);
    i=1;
    while(i<=num){
        sum = sum+i;
        i++;
    }
    printf("The sum of %d natural no. is %d\n", num, sum);
return 0;
}
============================================================
#include <stdio.h>

    int main(){
   int num, sum=0;
    printf("Enter a number to print the sum upto the entered no.: ");
    scanf("%d", &num);
    
    for(int i=1; i<=num; i++){
        sum = sum+i;
    }
    printf("The sum of %d natural no. is %d\n", num, sum);
return 0;
}*/
