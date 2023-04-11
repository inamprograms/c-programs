#include<stdio.h>

int main()
{

    int num;
    int flag =1;
    scanf("%i", &num);

    if (num == 0 || num == 1)
    {
        flag = 1;
    }
    
    for (int i = 2; i <= num/2 ; i++)
    {
        
        if (num %i == 0)
        {
            flag == 1;
            break;
        }
        
    }

    if (flag == 0)
    {
        printf("Prime is.. ");
    }       
    else
    {
        printf("Not Prime is.. ");

    }
    
    

    


    return 0;
}