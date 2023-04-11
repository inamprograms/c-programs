#include<stdio.h>

void fill_arr(int my_arr[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Enter value %i%i", i,j);
            scanf("%i",&my_arr[i][j]);
        }
        
    }
    
}
void display_arr(int my_arr[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           printf("%i",my_arr[i][j]);
        }
        
    }
    
}
int main()
{

        int arr[3][4];

        fill_arr(arr);
        display_arr(arr);




    return 0;
}