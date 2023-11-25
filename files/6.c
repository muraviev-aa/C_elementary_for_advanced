#include <stdio.h>

int main()
{
    char myStr[55] = "C is the best programming language!";
    size_t myStrLen = 0;

    for (unsigned ctr = 0; ctr < sizeof(myStr); ctr++)
    {
        if (myStr[ctr] == '\0')
        {
            myStrLen = ctr;
            break;
        }
    }

    if (myStrLen != 0)
        printf("Lenght is %zu\n", myStrLen);
    else
        printf("We have a problem. This is not a string\n");

    return 0;
}
