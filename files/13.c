#include <stdio.h>
#include <string.h>

int main()
{
    char str[9] = "Goodbye!";

    printf("%s\n", str);
    printf("Enter a new string. But no more than 8 characters!\n");
    // fgets(where to save input, maximum number of characters, where to get symbols)
    fgets(str, 9, stdin);
    printf("Str is %s, length str is %u\n", str, strlen(str));

    return 0;
}
