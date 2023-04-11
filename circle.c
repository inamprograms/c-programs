#include<stdio.h>

//function prototype
float getRadius(float c , const float pi);
float getArea(float r,const float pi);

int main()
{
    float area , radius, circm;
    const float pi = 3.1416;

    printf("Enter circumferance of circle: ");
    scanf("%f",&circm);
//function calling
    radius = getRadius(circm,pi);
    area = getArea(radius, pi);

    printf("\r\nRadius of circle is: %f",radius );
    printf("\r\nArea of circle is: %f",area);



    return 0;
}

// function to calculate radius of circle 
float getRadius(float c,const float pi)
{
    return c/(2*pi);
}
// function to calculate area of circle 
float getArea(float r,const float pi)
{
    return pi* r * r;
}