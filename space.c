#include<stdio.h>
#include<string.h>

int main()
{
    char arr[50] ={0};
    char arr1[20] ;

    printf("Enter your first name: ");
    scanf("%[^\n]",arr);

    printf("Enter your second name: ");
    gets(arr1);

    // scanf("%s",arr1);

   
    
    printf("%s\r\n",arr);
    printf("%s",arr1);


    


    return 0 ;
}