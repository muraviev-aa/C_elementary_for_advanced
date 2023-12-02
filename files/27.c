#include <stdio.h>

int main()
{
    struct example
    {
        int i; // 4 bytes
        char c; // 1 byte
    };

    struct example first;

    printf("%zu\n", sizeof(first));
    printf("%zu\n", sizeof(struct example));

    return 0;
}
