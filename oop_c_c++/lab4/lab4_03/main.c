#include <stdio.h>
#include <stdlib.h>
//3. Write a function to make a string copy from source string to destination string. (like strcpy())
int main()
{
    char str1[50] ,str2[50] ;
    printf("enter string \n");
    scanf("%[^\n]",str1);
    strcpy(str1 ,str2);
    printf("first string is : %s",str1);
    printf("\nsecond string is : %s",str2);
    return 0;
}
void strcpy(char *arr1 ,char *arr2){
    int count =0;
    while(arr1[count] != '\0'){
    arr2[count] = arr1[count];
    count ++;
    }
}
