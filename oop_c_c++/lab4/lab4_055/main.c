#include <stdio.h>
#include <stdlib.h>
/*5. Write a program to make an array of strings which number of strings is read from the
user and so the size of each string is read from the user, after that read all strings and
print it.
*/

void allocation( int size,char *arr);

int main()
{
    int strings_count;

    printf("enter number of strings : ");
    scanf("%d",&strings_count);

    char *strings_arr[strings_count];

    allocation(strings_count, strings_arr );


    for(int i=0 ; i<strings_count; i++)
    {
        printf("enter string number %d : ",i);
        scanf("%s", strings_arr[i]);
        //gets(strings_arr[i]);

    }

    for(int i=0 ; i<strings_count; i++)
    {
        printf("enter string number %d : ",i);
        printf("%s\n", strings_arr[i]);

    }
    return 0;
}

void allocation( int size,char *arr)
{
    int str_size;
    for(int i = 0; i< size ; i++)
    {
        printf("enter size of string number %d : ",i);
        scanf("%d",&str_size);

        arr[i] =(char *) malloc(str_size * sizeof(char));
    }
}
