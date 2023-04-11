#include<stdio.h>
void sum(int *i,int *j);
int main()
{

   int a,b;
   scanf("%i %i",&a,&b);
    sum(&a,&b);
    return 0;
}


void sum(int *i,int *j)
{
    int c;
    c = *i + *j;
    printf("%i",c);
}