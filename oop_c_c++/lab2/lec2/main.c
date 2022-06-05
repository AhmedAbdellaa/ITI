#include <stdio.h>
#include <stdlib.h>
int main()
{
    //magikbox
    system("clrscr");
    int num ;

    printf("enter odd number");
    scanf("%d",&num);

    int display[num][num];
    int current_num =1 ;
    int row = 0;
    int col = num/2;
    //printf("%d",col);
    display[row][col] = current_num;
    int size = num * num ;
    for(int i =2 ; i <=size; i++)
    {

        if(current_num % num ==0)
        {


            row = row+1;
            if(row >= num)
                row = 0;
            display[row][col] = i;

        }
        else
        {
            row =row -1;
            if(row< 0 )
                row = num-1;
            col =col-1;
            if(col< 0 )
                col = num-1;

            display[row][col] = i;

        }
        current_num = i;
    }
    for(int i =0 ; i<num; i++)
    {
        for(int j =0 ; j<num; j++)
        {
            printf("%d \t",display[i][j]);
        }
        printf("\n");
    }



    return 0;
}
