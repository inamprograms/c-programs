#include<stdio.h>

int getSquare(int a,int b);
int main(){

    int val,val1;
    scanf("%i %i",&val,&val1);

    int res = getSquare(val,val1);
    printf("(%i + % i) = %i",val,val1 ,res);
    // printf("(%i + % i) = %i",val,val1 ,res);


}

int getSquare(int a , int b)
{
  
    return a*a+b*b+2*a*b;
}