#include<stdio.h>
#include<string.h>
struct student
{
   char name[20] ;
   int roll_no ;
void ptr_Data()
{
       printf("Name of student: %s",name);
       printf("Roll number of student: %d",roll_no);
   }
   
};

int main(){
   
    struct student s1;
    strcpy(s1.name, "ALi");
    s1.roll_no =10;
    // s1. =10;
    s1.ptr_Data();



    return 0;
}
