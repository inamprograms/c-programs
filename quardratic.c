#include<stdio.h>
#include <wchar.h>
#include <locale.h>

//function to display quardratic equation
void quad(int *n1,int *n2,int *n3){      
    setlocale(LC_CTYPE, "");
    wprintf(L"%iX² + %iX + %i = 0",*n1,*n2,*n3);
}
int main()
{

    int num1;
    int num2;
    int num3;
    //taking input from user 
    scanf("%i %i %i",&num1,&num2,&num3);
    //calling fi=unction
    quad(&num1,&num2,&num3);


return 0;



}