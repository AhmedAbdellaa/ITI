#include <stdio.h>
#include <stdlib.h>
//1. Write a recursive function to compute the power operation: X^ Y
float power(float x,float y);
float powermin(float x,float y);
int main()
{
    float x,y ;
    printf("enter number ");
    scanf("%f",&x);

    printf("enter power ");
    scanf("%f",&y);

    printf("result is : %0.3f ",powermin(x,y));

    return 0;
}

float powermin(float x,float y)
{
    if (y<0)
    {
        y = abs(y);
        return 1/power(x,y);
    }
    else
        return power(x,y);
}

float power(float x,float y)
{

    if (y == 0)
        return 1;
    if (y ==1)
        return x;


    return x * power(x,y-1);
}


