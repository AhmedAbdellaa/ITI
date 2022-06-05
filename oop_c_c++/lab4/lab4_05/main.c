#include <stdio.h>
#include <stdlib.h>
/*5. Write a program to make an array of strings which number of strings is read from the
user and so the size of each string is read from the user, after that read all strings and
print it.
*/

int main()
{
    int strings_count,str_size;

    printf("enter number of strings : ");
    scanf("%d",&strings_count);

    char *strings_arr[strings_count];

    for(int i = 0; i< strings_count ; i++)
    {
        printf("enter size of string number %d : ",i);
        scanf("%d",&str_size);

        strings_arr[i] =(char *) malloc(str_size * sizeof(char));
    }
    for(int i=0 ; i<strings_count;i++){
        printf("enter string number %d : ",i);
        //scanf("%s", strings_arr[i]);
        gets(strings_arr[i]);

    }

    for(int i=0 ; i<strings_count;i++){
        printf("enter string number %d : ",i);
        printf("%s\n", strings_arr[i]);

    }
    return 0;
}
