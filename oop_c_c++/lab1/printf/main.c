#include <stdio.h>
#include <stdlib.h>

int main()
{


    char var = 'a';
    printf("%d  decimal (integer) number (base 10) : ",var);
    printf("\n%c	character : ",var);
    printf("\n%e  exponential floating-point number",var);
    printf("\n%f	floating-point number",var);
    printf("\n%i	integer (base 10) ",var);
    printf("\n%o	octal number (base 8) ",var);
    //printf("\n%s	a string of characters ",var);
    printf("\n%u	unsigned decimal (integer) number ",var);
    printf("\n%x	number in hexadecimal (base 16) ",var);
    return 0;
}
