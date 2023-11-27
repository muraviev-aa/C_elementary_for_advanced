#include <stdio.h>
#include <string.h>

int main()
{
    char str1[9] = "Goodbye!";
    printf("%s\n", str1);

    char str2[3] = "1234567890";
    printf("%s\n", str2);

    /* str2|str1
    |1|2|3|G|o|o|d|b|y|e|!|\0|
    */

    return 0;
}
