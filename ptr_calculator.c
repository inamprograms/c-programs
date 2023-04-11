#include<stdio.h>

// function to calculate the + , - , *, / through pointers
   int calculator(int *n1, int *n2, char *ope)
   {
      
       switch (*ope)
       {
       case '+':
           return *n1+*n2;
           break;
       case '-':
           return *n1-*n2;
           break;
       case '*':
           return *n1 * *n2;
           break;
       case '/':
           return (*n1)/(*n2);
           break;
       
       default:
            printf("Please enter a valid operator...");
           break;
       }
   }

int main()
{
   int num1, num2;
   char op;

   // assigning the address of variables to pointers
   int *ptr1 = &num1;
   int *ptr2 = &num2;
   char *ptr3 = &op;

// taking value from user 
   printf("Operator (+ , - , * , /): ");
   scanf("%c",&op);
   printf("Enter first number: ");
   scanf("%i",&num1);
   printf("Enter second number: ");
   scanf("%i",&num2);
    
    // callling function and passing parameters as pointers
   int res = calculator(ptr1,ptr2,ptr3); 

// printing result
    if (op == '+' ||op == '-' ||op == '*' ||op == '/')
    {
        printf("%i",res);
       
    }
    

    return 0;
}