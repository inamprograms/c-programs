#include<stdio.h>

struct alpha
{
    int a;
    int b;
    int c;
    // global declaration of structure object
}beta;

void data()
{
    beta.a = 90;
    printf("%i",beta.a);
}
int main()
{
//you can declare the object of structure  any where into function and can use the members of structure
    // local declaration of structure object
    struct alpha beta;
    data();
    beta.a = 10;
    beta.b = 30;
    beta.c = 70;

    printf("%i %i %i",beta.a,beta.b,beta.c);


    return 0;
}