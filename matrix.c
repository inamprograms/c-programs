#include<stdio.h>

int main()
{
    int mat[4][3];
    int dia[10]={0};
    int lower[10] ={0};
    int upper[10] ={0};
    int d=0;
    int l=0;
    int u=0;


    printf("Enter values in matrix: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%i", &mat[i][j]);
        }
        
    }

    printf("values in matrix: ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("\r\n%i",mat[i][j]);
        }
        
    }
    
    printf("\r\nRequirement of matrix are : ");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(i==j){
                dia[d] = mat[i][j];
                d++;
            }
            else if(i<j)
            {
                upper[u] = mat[i][j];
                u++;
            }
            else
            {
                lower[l] = mat[i][j];
                l++;
            }
           
        }
        
    }

   
// int length = sizeof(dia)/sizeof(dia[0]);
// printf("size is: %d",length);
    for (int i = 0; i < 10; i++)
    {
        // printf("\r\n%i", dia[i]);
        // printf("\r\n%i", upper[i]);
        printf("\r\n%i", lower[i]);
    }

    return 0;
    
}
