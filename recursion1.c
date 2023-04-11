#include<string.h>
#include<stdlib.h>

#include<stdio.h>

int sum(int n);

int main(){
    int num,ans;

    printf("Enter number:");
    scanf("%i", &num);
    ans = sum(num);


    return 0;
}

