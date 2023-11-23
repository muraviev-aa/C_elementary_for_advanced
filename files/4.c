#include <stdio.h>
#include <string.h>

int main()
{
    char myStr[] = "C is the best programming language!";

    size_t lengthStr = 0;
    lengthStr = strlen(myStr);
    printf("Lenght of my string is %zu characters\n", lengthStr); // 1 option
    printf("Lenght of my string is %zu characters\n", strlen(myStr)); // 2 option
    printf("Lenght of my string is %zu characters\n\n", strlen("C is the best programming language!")); // 3 option

    size_t sizeStr = 0;
    sizeStr = sizeof(myStr);

    printf("Size of my string is %zu bytes\n", sizeStr);
    printf("Size of my string is %zu bytes\n", sizeof(myStr));

    return 0;
}
