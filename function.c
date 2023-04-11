#include<stdio.h>
#include<math.h>

//defning the function 
int getSquare(int num);
int getCube(int num);
int getSquareRoot();

int main(){
    int num;
    int option;
    int result;

// taking input from user of number
    printf("Enter a number: ");
    scanf("%d", &num);

// menue options
    printf("\r\npress 1 To take square of number ");
    printf("\r\npress 2 To take cube of number ");
    printf("\r\npress 3 To take square root  of number ");

    printf("\r\nEnter your choice: ");
    scanf("%d", &option);

// calling functions based on choice/option
    switch (option)
    {
    case 1:
        result = getSquare(num);
        printf("Square  is : %d", result  );  
        break;
    case 2:
        result = getCube(num);
        printf("Cube is : %d", result  );      
        break;
    case 3:
        result = getSquareRoot(num);
        printf("Square root  is : %d", result  );
        break;
    
    default:
        printf("Please enter valid choice..");
        break;
    }


    return 0;
}

// function to calculate square
int getSquare(int num){
    return num * num;
}
// function to calculate cube
int getCube(int num){
    return num * num *num;
}
// function to calculate square root
int getSquareRoot(int num){
    return sqrt(num);
}