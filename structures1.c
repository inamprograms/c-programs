#include<stdio.h>
#include<string.h>

struct customer_details
{
    char name[10];
    int age;
    int cnic;
    int phone_no;
    char source[30];
    char destinatin[30];

}ali;

int main()
{
    // scanf("%s",ali.name);
    // scanf("%i",ali.age);
    // scanf("%i",ali.cnic);
    // scanf("%i",ali.phone_no);
    // scanf("%s",ali.source);
    // scanf("%s",ali.destinatin);

    strcpy(ali.name,"inam");
    strcpy(ali.source,"skp");
    strcpy(ali.destinatin,"mdk");
    ali.age = 21;
    ali.cnic = 372;
    ali.phone_no = 03074636034;


    printf("Name : %s",ali.name);
    printf("\r\nAge : %i",ali.age);
    printf("\r\nCNIC : %i",ali.cnic);
    printf("\r\nCell Phone : %i",ali.phone_no);
    printf("\r\nFrom : %s",ali.source);
    printf("\r\nTo : %s",ali.destinatin);


    return 0;
}