#include <stdio.h>
#include <stdlib.h>
//C program to receive numbers from the user, and exit when the sum exceeds 100.
int main()
{
    int sum = 0;
    int num =0;

    while (sum <= 100 )
    {

        printf("enter number ");
        scanf("%d",&num);
        sum =sum+num;

    }
    printf("%d",sum);
    return 0;
}
