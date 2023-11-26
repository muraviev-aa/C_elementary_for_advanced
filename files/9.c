#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    char myCh = 0;
    unsigned ctr = 0;
    unsigned summa = 0;

    puts("Enter string");
    scanf(" %s", str);
    fflush(stdin);

    printf("You enter: \"%s\"\n", str);

    puts("Enter a character to determine its number in a line");
    myCh = getchar();

    for(ctr = 0; ctr < strlen(str); ctr++)
    {
        if(myCh == str[ctr])
            summa++;
    }

    printf("Number of characters per line %u\n", summa);

    return 0;
}
