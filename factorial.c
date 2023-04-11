#include<stdio.h>


 int fact(int num){
        if (num <= 1)
        {
            return 1;
        }
        else
        {
            return num * fact(num-1);
        }
        
    }
int main(){

    int num;
    printf("Enter vlue: ");
    scanf("%i", num);
    int ans = fact(num);
    printf("%i", ans);
    printf("dshfdgs");
    return 0 ;
}