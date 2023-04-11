#include<stdio.h>
int cube(int num); // function prototype

int main()
{

    int num;

//Taking input from user 
    printf("Enter a number: ");
    scanf("%i", &num);

// calling function
    int result = cube(num);

    printf("%i",result);
    return 0;
}

// function to calculate cube of number
int cube(int n)
{
    return n * n* n;
}