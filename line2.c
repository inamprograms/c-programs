// NOT DONE 


#include<stdio.h>

//function protype
float getSlop(float a1,float a2,float b1,float b2 ); 
// void getLine(float m,float c);

int main()
{
    float x1, y1, x2, y2,c;

// taking input from user
    printf("Enter coordinates of first point in the line: ");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinates of second point in the line: ");
    scanf("%f %f",&x2,&y2);

//calling get slop function
    float m = getSlop(x1,x2,y1,y2);

    scanf("%f",c);
//calling get line function
    //  getLine(m,c);
    char buffer[30];
    sprintf(buffer, "y = %fx + %f",m,c);
    printf("%s",buffer);

    return 0;
}

//function to get slope of line
float getSlop(float a1,float a2,float b1,float b2)
{
    return ((b2-b1)/(a2-a1));
}

// void getLine(float slope,float y)
// {
//     // return 0;
// }
