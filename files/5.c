#include <stdio.h>
#include <string.h>

int main()
{
    char myStr[80] = "Hello, World!";

    printf("%zu\n", sizeof(myStr));
    printf("%zu\n\n", strlen(myStr));

    char myStr2[3] = "C!";
    printf("%s size is %zu, length is %zu\n", myStr2, sizeof(myStr2), strlen(myStr2));

    return 0;
}
