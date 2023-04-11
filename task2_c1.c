#include<stdio.h>

int main(){

    int a = 60; 
    int b;
    int* c;
    // storing value of a into pointer c
    c = &a;
    // storing value of a into variable b
    b = &a;

    *c = 10;
    // a = 5;
    b = 20;
    // *b = 20;
    
    // printf("%i %i",a);
    printf("%i %i %i",a,b,c);


    
    
    // int a;
    // a=5;
    // int *b;
    // b=&a;
    // *b =12;
    // printf("Value of b is %i : ", a);
    // printf("Value of b is %i : ", b);
    // printf("Value of b is %i : ", *b);



    return 0;
}