#include <stdio.h>
#include <stdlib.h>

//Rewrite the previous program to print them in descending order.

int main()
{
    for(int i =12 ; i>=0; i--)
    {
        for(int j =10 ; j>=6; j--)
        {
            printf("%3d * %3d = %3d\t",j,i,i*j);
        }
        printf("\n");

    }
    printf("-----------------------\n");
    for(int i =12 ; i>=0; i--)
    {
        for(int j =5 ; j>=1; j--)
        {
            printf("%3d * %3d = %3d\t",j,i,i*j);
        }
        printf("\n");

    }
    return 0;
}
