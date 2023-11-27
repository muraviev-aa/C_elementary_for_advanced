#include <stdio.h>
#include <string.h>

#define LENOFSTR printf("Length of my string is %u elements\n", strlen(myStr))

int main()
{
    char myStr[13] = "Hello, all!";
    char otherStr[6] = ", bro";

    printf("myStr is \"%s\" \n", myStr);
    printf("Size of myStr is %u bytes\n", sizeof(myStr));
    LENOFSTR;

    strcpy(myStr, "Goodbye");
    printf("\nNEW!!! myStr is \"%s\"\n", myStr);
    printf("Size of myStr is %u bytes\n", sizeof(myStr));
    LENOFSTR;

    strcat(myStr, otherStr);
    printf("\nAfter concatenation myStr is \"%s\"\n", myStr);
    printf("Size of myStr is %u bytes\n", sizeof(myStr));
    LENOFSTR;

    return 0;
}
