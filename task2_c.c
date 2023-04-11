#include<stdio.h>
#include<string.h>

int main()
{

    char arr[10];
    scanf("%s",arr);

    for (int i = 0; i<strlen(arr); i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i] -32;
            /* code */
        }
        
    }
    printf("%s",arr);


    


    return 0;
}