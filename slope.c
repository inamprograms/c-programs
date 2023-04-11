#include<stdio.h>

float getSlop(float a1,float a2,float b1,float b2 ); //function protype

int main()
{
    float x1, y1, x2, y2;

// taking input from user
    printf("Enter coordinates of first point in the line: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of second point in the line: ");
    scanf("%f %f",&x2,&y2);

//calling function
    float result = getSlop(x1,x2,y1,y2);
    printf("%f",result);

    return 0;
}

//function to get slope of line
float getSlop(float a1,float a2,float b1,float b2)
{
    return ((b2-b1)/(a2-a1));
}