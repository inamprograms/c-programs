#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr;
   
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    
    // ptr = &arr[0];
    // printf("%i",*ptr);
    // printf("%i",*ptr+1);

    ptr =arr;
    printf("%i",*ptr);
    printf("%i",*ptr+1);
    
    return 0;
}

