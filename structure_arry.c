#include<stdio.h>

// structure that contains the information of students
struct student
{
    char name[10];
    int age ;
    char degree[10];
    int semester;
    int roll;
};


int main()
{  
    struct student iotStudents[30];

    for (int i = 0; i <30; i++)
    {
        printf("Enter details for student %i : \r\n",i);
        printf("Name : ");
        scanf("%s",iotStudents[i].name);
        printf("Age : ");
        scanf("%i",&iotStudents[i].age);
        printf("Degree : ");
        scanf("%s",&iotStudents[i].degree);
        printf("Semester : ");
        scanf("%i",&iotStudents[i].semester);
        printf("Roll no. : ");
        scanf("%i",&iotStudents[i].roll);
    }
    for (int i = 0; i <30; i++)
    {
       printf("****************************************************\r\n");
        printf("Name : %s\r\n" , iotStudents[i].name);
        printf("Age : %i\r\n" , iotStudents[i].age);
        printf("Degree : %s\r\n" , iotStudents[i].degree);
        printf("Semester : %i\r\n" , iotStudents[i].semester);
        printf("Roll no. : %i\r\n" , iotStudents[i].roll);
    }
    
    
    
    
    
    
return 0;
}