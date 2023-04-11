#include<stdio.h>

int main()
{

    int i=10;
    int *ptr;
    // i = 10;
    ptr = &i;

    printf("%p\r\n",ptr);
    printf("%p\r\n",&i);
    printf("%i",*ptr);



    return 0;
}