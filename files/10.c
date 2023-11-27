#include <stdio.h>
#include <string.h>

int main()
{
    char str1[3] = "No";
    char str2[5] = "Alex";

    gets(str2);
    printf("%s%s", str2, str1);
}
