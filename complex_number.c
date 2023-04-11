#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
  char data1[10];
  char data2[10];
  char empty[10] = {0};
  int flag = 0;
  char op,iota;
  int realValue , imaginaryValue;
  int realValue1 , imaginaryValue1;
  
  

// getting string from user 
    printf("\r\nEnter first complex number: ");
    scanf("%s",data1);

    printf("\r\nEnter second complex number: ");
    scanf("%s",data2);

// printing the string
    printf("\r\n%s", data1);
    printf("\r\n%s", data2);

// parsing the first complex number
    for (int i = 0; i < strlen(data1); i++)
    {
        if(data1[i] == '+')
        {
          op = data1[i];
          realValue = atoi(empty);
          memset(empty,0,10);
          flag = 0;
        }
        else
        {
          if(data1[i] != 'i')
          {
            empty[flag] = data1[i];
            flag++;
          }
          else
          {
            iota = data1[i];
          }
        }
    }
    imaginaryValue = atoi(empty);
    printf("\r\n%i %c %i%c",realValue,op,imaginaryValue,iota);
    memset(empty,0,10);
    flag = 0;

    
    // parsing the second complex number
    for (int i = 0; i < strlen(data2); i++)
    {
        if(data2[i] == '+')
        {
          op = data2[i];
          realValue1 = atoi(empty);
          memset(empty,0,10);
          flag = 0;
        }
        else
        {
          if(data2[i] != 'i')
          {
            empty[flag] = data2[i];
            flag++;
          }
          else
          {
            iota = data2[i];
          }
        }
    }
    imaginaryValue1 = atoi(empty);
    printf("\r\n%i %c %i%c",realValue1,op,imaginaryValue1,iota);

    
    int res1 = (realValue*realValue1 - imaginaryValue * imaginaryValue1);
    int res2 = (realValue*imaginaryValue1 + imaginaryValue * realValue1);
    printf("\r\n(%i %c %i%c)(%i %c %i%c) = %i %c %i%c",realValue,op,imaginaryValue,iota,
    realValue1,op,imaginaryValue1,iota,res1,op,res2,iota);

    


return 0;
}
