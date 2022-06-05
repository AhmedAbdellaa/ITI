#include <stdio.h>
#include <stdlib.h>


//Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and separated by group of “ *’s ”.
int main()
{
    for(int i =0 ; i<13; i++)
    {
        for(int j =1 ; j<6; j++)
        {
            printf("%3d * %3d = %3d\t",j,i,i*j);
        }
        printf("\n");

    }
    printf("-------------------------------\n");
    for(int i =0 ; i<13; i++)
    {
        for(int j =6 ; j<11; j++)
        {
            printf("%3d * %3d = %3d\t",j,i,i*j);
        }
        printf("\n");

    }

    return 0;
}
