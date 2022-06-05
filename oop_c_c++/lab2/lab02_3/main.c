#include <stdio.h>
#include <stdlib.h>


//Write a C program to print a simple menu with 3 choices, when select one choice print the choice word and exit.
int main()
{
    int choise =0;

    while(choise != 4)
    {

        printf("choose number of the following;");
        printf("\n1)\n2)\n3)");
        printf("\n4) for out of project\n");

        scanf("%d",&choise);

        switch(choise)
        {
        case 1:
            printf("you enter 1\n");
            break;
        case 2:
            printf("you enter 2\n");
            break;
        case 3:
            printf("you enter 3\n");
            break;
        case 4 :
            printf("outing out of project\n");
            break;
        default :
            printf("enter valid choice\n");

        }
    }
    return 0;
}
