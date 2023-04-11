#include<stdio.h>
#include<string.h>
#include<stdlib.h>


float getScope(float a1,float a2,float b1,float b2 ); //function protype

int main()
{
    float x1, y1, x2, y2,m,c;
    char equ[30];

// taking input from user point one and tow to calculate the slop
    printf("Enter coordinates of first point in the line: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of second point in the line: ");
    scanf("%f %f",&x2,&y2);

// Taking y-intercept from user
    printf("Enter y-intercept or c: ");
    scanf("%f",&c);

//calling function to calculate slop/gradient of two points on line
    m = getScope(x1,x2,y1,y2);

// to get string of the form y = mx + c 
  sprintf(equ,"y = %fx + %f",m,c);
  printf("equation is: %s",equ);

    return 0;
}

//function to get line
float getScope(float a1,float a2,float b1,float b2)
{
    return ((b2-b1)/(a2-a1));
}