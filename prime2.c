
#include<stdio.h>
struct values
{
    int num;
    int flag ;
    
}obj;

void getPrime(int n , int f)
{
     for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            f++;
        }
    }
    
    if (f == 2)
    {
        printf("%i is Prime number..",n);
    }
    else
    {
        printf("%i is not Prime number..",n);

    }
}

int main()
{

    printf("Enter prime number: \r\n" );
    scanf("%i",&obj.num);
    getPrime(obj.num,obj.flag);
   
    

    


    return 0;
}