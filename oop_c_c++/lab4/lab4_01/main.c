#include <stdio.h>
#include <stdlib.h>


void swap(int *a ,int *b);

int main()
{
int a,b;
    printf("enter first number");
    scanf("%d",&a);

    printf("enter second number");
    scanf("%d",&b);
    swap(&a,&b);

    printf("first number is %d ,and the second number is %d",a ,b);
    return 0;
}
void swap(int *a ,int *b){
    int tmp;
    tmp = *a;
    *a = *b ;
    *b = tmp;
}
