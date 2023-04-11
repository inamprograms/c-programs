#include<stdio.h>
#include<math.h>

int main()
{
    /* 
        ax2 + bx + c = 0
        x->> is variable
        a->> is coefficient of xsquare
        b->> is coefficient of x
        c->> is constant
    */
    float x1,x2 , a, b ;
    const int c = 1; 

    scanf("%f %f", &a,&b);

    x1 = (-b + sqrt((b*b) - 4*a*c))/(2*a);
    x2 = (-b - sqrt((b*b) - 4*a*c))/(2*a);

    printf("x = (%f , %f)", x1,x2);
    return 0;
}