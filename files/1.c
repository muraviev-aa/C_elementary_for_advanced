#include <stdio.h>
#include <string.h>

int main()
{
    char str1[6] = "Hello";

    char str2[3];
    strcpy(str2, ", ");

    char str3[7];
    str3[0] = 'W';
    str3[1] = 'o';
    str3[2] = 'r';
    str3[3] = 'l';
    str3[4] = 'd';
    str3[5] = '!';
    str3[6] = '\0';

    printf("%s%s%s", str1, str2, str3);

    return 0;
}
