#include <stdio.h>
#include <stdlib.h>
#define num_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define num_TO_BINARY(num)  \
  (num & 0x80 ? '1' : '0'), \
  (num & 0x40 ? '1' : '0'), \
  (num & 0x20 ? '1' : '0'), \
  (num & 0x10 ? '1' : '0'), \
  (num & 0x08 ? '1' : '0'), \
  (num & 0x04 ? '1' : '0'), \
  (num & 0x02 ? '1' : '0'), \
  (num & 0x01 ? '1' : '0')
int main()
{
    printf("Hello world!\n");
    char name[20] ;
    scanf("%[^\n]s" ,&name);
    //gets(name);
    printf("%s",name);
    printf("Leading text "num_TO_BINARY_PATTERN, num_TO_BINARY(5));
    return 0;
}
