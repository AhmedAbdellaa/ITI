#include <stdio.h>
#include <stdlib.h>

//6. Write a program to read an array and print it using 2 for loops?
int main()
{

    int size =3 ;
    int arr[size];
    for(int i = 0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i = 0; i<size; i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
