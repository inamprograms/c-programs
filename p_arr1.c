#include<stdio.h>
#include<string.h>

int main(){

    char *ptr;
    char name[20] = "Inam";
    char name1[20] = {0};
    char name2[20] = {0};

    ptr = strcpy(name1,name);
    printf("%s\r\n",name);
    printf("%s\r\n",name1);
    printf("%s",ptr);




    return 0;
}