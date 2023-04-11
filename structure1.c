#include<stdio.h>
struct management
{
    char name[20];
    int age;
    int cnic;
    char address[50];

}person1;

void details();

int main(){

    printf("Hey! Enter your details:  \r\n");
    printf("Name : ");
    scanf("%s",person1.name);
    printf("Age : ");
    scanf("%i",&person1.age);
    printf("CNIC : ");
    scanf("%i",&person1.cnic);
    printf("Address : ");
    scanf("%s",person1.address);
    
    details();     //function call
    return 0 ;
}
void details()
{
    struct management person2;


    printf("**************************************************************************\r\n");

    printf("Your Name: %s\r\n",person1.name);
    printf("Your Age: %i\r\n",person1.age);
    printf("Your CNIC: %i\r\n",person1.cnic);
    printf("Your Address: %s\r\n",person1.address);

    printf("**************************************************************************\r\n");

    printf("Hey! Enter your details:  \r\n");
    printf("Name : ");
    scanf("%s",person2.name);
    printf("Age : ");
    scanf("%i",&person2.age);
    printf("CNIC : ");
    scanf("%i",&person2.cnic);
    printf("Address : ");
    scanf("%s",person2.address);

    printf("**************************************************************************\r\n");

    printf("Your Name: %s\r\n",person2.name);
    printf("Your Age: %i\r\n",person2.age);
    printf("Your CNIC: %i\r\n",person2.cnic);
    printf("Your Address: %s\r\n",person2.address);



}