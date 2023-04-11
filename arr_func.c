#include<stdio.h>
// int sum_arr(int my_arr,int n);
int sum_arr(int my_arr[],int n)
{
    int sum = 0;
    
    for (int i = 0; i < n; i++)
    {
        sum = sum + my_arr[i];
    }
    return sum;
    
}
int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    int res = sum_arr(arr,10);
    printf("%i" , res);

    return 0;
}

