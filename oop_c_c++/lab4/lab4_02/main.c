#include <stdio.h>
#include <stdlib.h>

#define size 5

void read_arr(int arrsize, int *arr);
void print_arr(int arrsize, int *arr);
//2. Using a function to read an array from user, and another one to print it.
int main()
{
    int arr[size];
    read_arr(size,arr);
    print_arr(size,arr);
    return 0;
}
void read_arr(int arrsize, int *arr)
{
    for(int i = 0 ; i<arrsize ; i++)
    {
        printf("enter value of index %d : ",i);
        //scanf("%d",&arr[i]);
        scanf("%d",arr++);
    }
}
void print_arr(int arrsize, int *arr)
{
    for(int i = 0 ; i<arrsize ; i++)
    {
        printf("%d\n",arr[i]);

    }
}
