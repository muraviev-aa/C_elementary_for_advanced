#include <stdio.h>
#include <string.h>

int main()
{
    unsigned num = 0; // 4 bytes
    char str[9] = "Goodbye!"; // 9 bytes

    printf("%s\n\n", str);

    printf("Enter a new string. But no more than 8 characters!\n");
    gets(str);
    printf("%s %u\n", str, num);

    // Let's see how the variables are stored in memory
    printf("%u|%u\n", &str, &num);

    /*
    str - 9 bytes      |num - 4 bytes
    |1|2|3|4|5|6|7|8|9 |1|2|3|4|
    |G|o|o|d|b|y|e|!|\0|0| | | |
    */

    return 0;
}
