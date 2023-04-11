#include<stdio.h>
#include<string.h>


void concat(char *str2,char *str1)
{
    for (int i = 0; i < 10; i++)
    {
        
    }
    
}
int main()
{

    char string1[10];
    char string2[10];
    int length=0;

    scanf("%s",string1);
    scanf("%s",string2);

    printf("String 1: %s\r\n",string1);
    printf("String 2: %s",string2);
    
  for (int i = 0; string1[i] != '\0'; i++)
    {
        length++;
    }

    for (int i = 0; string2[i] != '\0'; i++)
    {
        string1[length] = string2[i];
        length++;
    }
  // terminating the s1 string
  string1[length] = '\0';

    

   printf("string is : %s",string1);
    




    return 0;
}


