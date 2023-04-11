#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void parser();   // function prototype

//Main function 
int main(){
   
   // Taking input string from user
    char data[10]; 
    printf("Enter value: \r\n");
    scanf("%s" , data);
    printf("Array is:  %s\r\n",data);
 
 //function call
    parser(data);  
    return 0;
}
 
 
//function to parse the input string 
void parser(char data[])  
{   
    char data1[10];
    char data2[10];
    char ope;
    int k=0;
     int ans;
    for (int i = 0; i <= strlen(data) ; i++)
    {
        // to seperate the operator
        if (data[i] == '+' || data[i] == '-' || data[i] == '*' || data[i] == '/' )
        {

            ope = data[i];
            k = i;

        }
      
        else
        {
              // to seperate the left side of string 
            if(k == 0){
                data1[i] = data[i];
               
            }
              // to seperate the right side of string 
            else
            {
                data2[i-k-1] = data[i];
              
            }
           
        }      
    }
// diplaying results of individuals
    printf("Operator is: %c \r\n",ope);
    printf("First value: %s \r\n",data1);
    printf("Second value: %s \r\n",data2);
// converting string or character type value to float
    float firstVal = atof(data1);
    float secondVal = atof(data2);
//calculation of first and second value based on operator
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
    //displaying the sum
    if (ope == '+' || ope== '-' || ope== '*' || ope== '/' )
        { 
            printf("Your answer: %i",ans);
        }
}