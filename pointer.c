#include<stdio.h>

// function to calculate the cube
int cube(int *p)
{
    return *p * *p * *p;
}

int main()
{
    // declaring a variable 
    int num;

    // declaring pointer and storing the address of num variable into ptr
    int *ptr = &num;

    // taking  the number from user
    printf("Enter a number: ");
    scanf("%i",&num);

    // calling function cube and passing the pointer ptr which has the address of num 
    int res = cube(ptr);

    //printing the result
    printf("%i",res);


    return 0;
}