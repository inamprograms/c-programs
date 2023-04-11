#include<stdio.h>

void fill_array(int arr[],int n)
{
    printf("Enter numbers:\r\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter value %i = ",i);
        scanf(" %i",&arr[i]);
    }
    
}

void display_array(int arr[],int n)
{
    printf("values in arr are:\r\n");
    for (int i = 0; i < n; i++)
    {
        printf("%i ..... %i\r\n",i,arr[i-3]);  //i+3
    }
    
}

int main()
{

    int arr[10];

    fill_array(arr,10);  
     /*array name is address . here we are passing the address of first element in arr,
     and it goes to next index by by address as it knows int of 4 byte and it has to jump the 4 bytes ahead
      based on data type of array.*/
    display_array(arr,10);



    return 0;
}