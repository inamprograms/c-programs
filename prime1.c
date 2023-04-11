#include<stdio.h>

int main()
{

    int num, flag=0;
    printf("Enter prime number: \r\n" );
    scanf("%i",&num);

    for (int i = 1; i <= num; i++)
    {
        if (num%i == 0)
        {
            flag++;
        }
    }
    
    if (flag == 2)
    {
        printf("%i is Prime number..",num);
    }
    else
    {
        printf("%i is not Prime number..",num);

    }
    

    


    return 0;
}