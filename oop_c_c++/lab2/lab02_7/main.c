#include <stdio.h>
#include <stdlib.h>
//7. Write a program to find the maximum and minimum values of a set of numbers using a single dimension array.
int main()
{
    int size = 5 ;
    printf("enter size of array :");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size; i++)
    {
    printf("enter number :");
        scanf("%d",&arr[i]);
    }
    int max =arr[0],min =arr[0];
    for (int i =1; i<size ; i++)
    {
        if (arr[i]> max)
        {
            max = arr[i];
        }
        if (arr[i]< min)
        {
            min = arr[i];
        }
    }
    printf("maximum is %d\n",max);
    printf("minimum is %d",min);
    return 0;
}
