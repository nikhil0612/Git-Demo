 #include <stdio.h>
 
    int main(){
    int first,second,next,num;
    first =0;
    second=1;
    printf("Enter a number to print the fibonacci series: ");
    scanf("%d", &num);
    printf("%d %d", first, second);
    for(int i=1; i<=num; i++){
        next = first+second;
        first=second;
        second=next;
        printf(" %d", next);
    }
 return 0;
 }