#include <stdio.h>
#include <stdlib.h>

int main()
{
   char character ='a' ;
   printf("input only singel char ");
   character = getchar();
   printf("input char is %c  and it's ascii is %d",character,character);
    return 0;
}
