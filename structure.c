#include<stdio.h>
#include<string.h>

struct student
{
    char name[10];
    void ptr_data();
    int roll_no;

    void ptr_data()
    {
        printf("Your name is: %s", name);
        printf("\r\nYour roll nuimber is : %d", roll_no);
    }
};


int main(){

    struct student s1;

    strcpy(s1.name,"inam");
    s1.roll_no = 32;
    s1.ptr_data();
   
    return 0;
}
