#include<stdio.h>

int main(){

    int a ;
    int *b = &a;

    // for (int i = 0; i < 5; i++)
    // {
    //    printf("Enter value %i : ",i+1);
    //     scanf("%d",&a);
    //    printf("%d\r\n", a);
    // }

      for (int i = 0; i < 5; i++)
    {
       printf("Enter value %i : ",i+1);
        scanf("%d",&a);
       printf("%d\r\n", b);
    //    printf("%d\r\n", *b);
    }
    


    return 0;
}