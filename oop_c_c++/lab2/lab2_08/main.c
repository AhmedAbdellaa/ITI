#include <stdio.h>
#include <stdlib.h>
//If you have a matrix of dimension 3*4. Write a program to read it from the user and find the sum of each row & the average of each column
int main()
{
    int sum =0 ;
    float avg =0;
    int row = 3;
    int col = 4 ;
    int matrix[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            printf("enter number for index %d ,%d : ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0; i<row; i++)
    {
        for(int j =0; j<col; j++)
        {
            sum += matrix[i][j];

        }
        printf("sum of row number %d is %d :\n",i,sum);
        sum = 0;
    }
    for(int i=0; i<col; i++)
    {
        for(int j =0; j<row; j++)
        {
            sum += matrix[j][i];
            avg = sum/3.0;

        }
        printf("avg of col number %d is  %f :\n",i,avg);
        sum = 0;
        avg = 0;
    }


    return 0;
}
