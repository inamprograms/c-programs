#include<stdio.h>

int main()
{
    int num1;
    int num2;
    int *ptr;

    ptr =&num1;
    printf("Enter number 1: ");
    scanf("%i",&*ptr);
    // scanf("%i",&num1);
    ptr =&num2;
    printf("Enter number 2: ");
    scanf("%i",&*ptr);
    // scanf("%i",&num2);

    


    int ans = num1+num2;
    // int ans = *ptr+*ptr;
    printf("%i",ans);
}