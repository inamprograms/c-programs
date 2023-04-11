#include<stdio.h>

// structure declared
struct alpha
{
   int val1,val2;
   char op;
};

//function definition
int calculator(struct alpha data);

int main()
{
    // declaring object of a structure 
    struct alpha gemma;

    // taking values from user into variables declared into structure
    printf("Operator (+ , - , * , /): ");
    scanf("%c",&gemma.op);
    printf("Enter value 1: ");
    scanf("%i",&gemma.val1);
    printf("Enter value 2: ");
    scanf("%i",&gemma.val2);

    // calling a function and passing the object of structure as parameter
    int res = calculator(gemma);

    // printing results
    if(gemma.op == '+' ||gemma.op == '-' ||gemma.op == '*' ||gemma.op == '/')
    {
        printf("%i",res);
       
    }

    return 0 ;
}

// function to get +, - , * , /
int calculator(struct alpha data)
{
    switch (data.op)
    {
    case '+':
        return data.val1 + data.val2;
        break;
    case '-':
        return data.val1 - data.val2;
        break;
    case '*':
        return data.val1 * data.val2;
        break;
    case '/':
        return data.val1 / data.val2;
        break;
    
    default:
        printf("Please enter a valid character...");
        break;
    }
}