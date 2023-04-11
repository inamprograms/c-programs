#include<stdio.h>

    struct student_details
    {
        char name[10];
        int age;
        char degree[10];
        int semester;
        int roll;
      
    };
      struct school_classes
        {
            int class_no;
            char class_name[20];
            struct student_details details[3];            
        };


int main()
{  
    
    struct school_classes epTech[2];

    for (int i = 0; i < 2; i++)
    {
        
        printf("Enter Your class number: ");
        scanf("%i",&epTech[i].class_no);
        printf("Enter Your class name: ");
        scanf("%s",epTech[i].class_name);
        printf("****************************************************\r\n");
        printf("Student class: %i->%s\r\n",epTech[i].class_no,epTech[i].class_name);
        for (int j = 0; j < 3; j++)
        {
            printf("Enter details for student %i : \r\n",j);
            printf("Name : ");
            scanf("%s",epTech[i].details.name[j]);
            printf("Age : ");
            scanf("%i",&epTech[i].details.age[j]);
            printf("Degree : ");
            scanf("%s",epTech[i].details.degree[j]);
            printf("Semester : ");
            scanf("%i",&epTech[i].details.semester[j]);
            printf("Roll no. : ");
            scanf("%i",&epTech[i].details.roll[j]);
        }
        
    
    // for (int i = 0; i < 2; i++)
    // {
        
    //     printf("****************************************************\r\n");
    //     printf("Student class: %i->%s\r\n",epTech.class_no[i],epTech.class_name[i]);
    //     for (int j = 0; j < 3; j++)
    //     {
         
    //         printf("Student: %i\r\n",j);
    //         printf("****************************************************\r\n");
    //         printf("Name : %s\r\n" , epTech.details.name[j]);
    //         printf("Age : %i\r\n" , epTech.details.age[j]);
    //         printf("Degree : %s\r\n" , epTech.details.degree[j]);
    //         printf("Semester : %i\r\n" , epTech.details.semester[j]);
    //         printf("Roll no. : %i\r\n" , epTech.details.roll[j]);
    //     }
        
    // }
    


    
    
    
    return 0;
}