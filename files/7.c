#include <stdio.h>

size_t findStrLen(const char str[], size_t size);

int main()
{
    char myStr[] = "C is the best programming language!";
    size_t myStrLen = 0;

    myStrLen = findStrLen(myStr, sizeof(myStr));

    if (myStrLen != 0)
        printf("Lenght string is %zu\n", myStrLen);
    else
        printf("We have a problem. This is not a string\n");

    return 0;
}

size_t findStrLen(const char str[], size_t size)
{
    size_t ctr;

    for (ctr = 0; ctr < size; ctr++)
    {
        if (str[ctr] == '\0')
            break;
    }

    return ctr;
}
