#include <stdio.h>
#include <string.h>

int main()
{
    char myStr[30] = "Hello Joe!";

    for (unsigned ctr = 0; ctr < strlen(myStr); ctr++)
        putchar(myStr[ctr]);

    return 0;
}
