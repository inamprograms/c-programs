
#include<stdio.h>
int fact(int n);
int main(){
   int num;
   printf("Please Enter number: ");
   scanf("%i", &num);

    int ans = fact(num);
    printf("%d",ans);
   
    return 0;
}

int fact(int n)
{
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}