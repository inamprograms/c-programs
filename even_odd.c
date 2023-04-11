#include<stdio.h>

struct values
{
    int value;
}obj;

void isEvenOdd(int val)
{
    // if(val%2==0)
    // {
    //     printf("%i is even..",val);
    // }
    // else
    // {
    //     printf("%i is odd..",val);

    // }





    if (val/2 == val/2)
    {
        printf("%i is even..",val);
       
    }
    else
    {
        printf("%i is even..",val);

    }
    
}//single and  double and difference
//bit by bit and byte by byte 
int main()
{

   printf("Enter a number : ");
   scanf("%i",&obj.value);

   isEvenOdd(obj.value);
   



    return 0;
}