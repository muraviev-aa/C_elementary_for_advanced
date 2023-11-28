#include <stdio.h>

int main()
{
    int num = -12;
    unsigned ctr = 100;

    printf("num = %d, ctr = %u\n", num, ctr);

    {
        int num = 333;
        unsigned ctr = 400;

        printf("num = %d, ctr = %u\n\n", num, ctr);
    }

    printf("num = %d, ctr = %u\n", num, ctr);

    return 0;
}
