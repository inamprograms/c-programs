#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char data[10];
  char empty[10] = {0};
  
  char op;
  int flag = 0;
  int firstValue ;
  int secondValue ;
  int result;

// getting string from user 
    printf("Enter value: ");
    scanf("%s",data);

// printing the string
    printf("%s", data);

for (int i = 0; i <= strlen(data); i++)
{
    if(data[i] == '+' ||data[i] == '-'||data[i] == '*'||data[i] == '/' )
    {
        op = data[i];
        firstValue = atoi(empty);
        memset(empty,0,10);
        flag = 0;
    }
    else
    {
        empty[flag] = data[i];
        flag++;
    }  
}
secondValue = atoi(empty);

printf("\r\nLeft side value: %i", firstValue);
printf("\r\nRight side value : %i", secondValue);
printf("\r\nOperator :%c", op);

switch (op)
{
case '+':
    result = firstValue + secondValue; 
    printf("\r\nSum is : %i",result);
    break;
case '-':
    result = firstValue - secondValue; 
    printf("\r\nDifference  is : %i",result);
    break;
case '*':
    result = firstValue * secondValue; 
    printf("\r\nAns is : %i",result);
    break;
case '/':
    result = firstValue / secondValue; 
    printf("\r\nAnswer is  : %i",result);
    break;

default:
    printf("\r\nPlease enter a valid choice..");
    break;
}

return 0;
}
