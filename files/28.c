#include <stdio.h>

int main()
{
    struct first
    {
        char c0;
        int i0;
        char c1;
    };

    struct second
    {
        int i0;
        char c0;
        char c1;
    };

    printf("\"struct first\" %zu\n", sizeof(struct first));
    printf("\"struct second\" %zu\n", sizeof(struct second));

    return 0;
}
