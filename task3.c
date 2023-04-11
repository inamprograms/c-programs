#include<stdio.h>

int main(){
    
// int a,b,*c,*d;
int a;
int b;
int *c;
// int *d;
scanf("%i %i",&*c,&*c);
c = &a;

printf("Enter values: ");

scanf("%i %i",&*c,&*c);

c = &b;

printf("Sum is : %i \r\n" , *c+*c); //40
// printf("Sum is : %i %i \r\n" , c,d); 
// printf("Sum is : %i \r\n" , a+b);   //40
    return 0;
}