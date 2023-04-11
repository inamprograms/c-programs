
#include <stdio.h>

int main()
{
/*
  ->>printf(format,...); writes the formate to the standard output
  ->>sprintf(buffer,format,..); writes the formate data to  
  buffer as a string
  
  Actually a buffer is storage area in ram 
  */

  // Let's take action : 

// a buffer
  char buffer[30];
  int a=10;
  int b = 50;

 /* here formate  "Sum of %i and %i is %i",a,b,a+b will get stored as string 
 into buffer of storing capacity upto 30 characters . Note this will not display sum
 at output screen.
 */
    sprintf(buffer,"Sum of %i and %i is %i",a,b,a+b);

/* 
    This will print the string into the buffer onto the standard output
*/
    printf("Buffer contains : %s" , buffer);
    return 0;
}