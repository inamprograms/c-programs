#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
  char data[10];
  char data1[10] = {0};
  char data2[10] = {0};
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
        flag = i;
    }
    else
    {
        if(flag == 0){
            data1[i] = data[i];
        }
        else
        {
            data2[i-flag-1] = data[i];
        }
    }
    
}

printf("\r\nLeft side value: %s", data1);
printf("\r\nRight side value : %s", data2);
printf("\r\nOperator :%c", op);

firstValue = atoi(data1);
secondValue = atoi(data2);

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
// printf("\r\nFirst Value : %i" ,firstValue );
// printf("\r\nSecond Value : %i" ,secondValue );








    return 0;
}
