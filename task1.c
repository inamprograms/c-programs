#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char data[10];
    char data1[10];
    char data2[10];
    char ope;
    int ans;
    int k=0;
 
    printf("Enter value: \r\n");
    scanf("%s" , data);
    printf("Array is:  %s\r\n",data);
    
    for (int i = 0; i <= strlen(data) ; i++)
    {
        if (data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/' )
        {
            ope = data[i];
            k = i;

        }
        else
        {
            if(k == 0){
                data1[i] = data[i];
               
            }
            else
            {
                data2[i-k-1] = data[i];
              
            }
           
        }      
    }

    printf("Operator is: %c \r\n",ope);
    printf("First value: %s \r\n",data1);
    printf("Second value: %s \r\n",data2);

    // float op = atof(b);
    float firstVal = atof(data1);
    float secondVal = atof(data2);

    if(ope == '+')
    {
        ans = firstVal + secondVal;
    }
    else if(ope == '-')
    {
        ans = firstVal - secondVal;
    }
    else if(ope == '*')
    {
        ans = firstVal * secondVal;
    }
    else if(ope == '/')
    {
        ans = firstVal / secondVal;
    }
    else{
        printf("Please enter valid characters..");
    }
    
    if (ope == '+' || ope== '-' || ope== '*' || ope== '/' )
        { 
            printf("Your answer: %i",ans);
        }
    return 0;
}
