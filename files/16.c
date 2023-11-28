#include <stdio.h>

void print2(void);

int main()
{
    int number = 1122;
    unsigned ctr = 2211;

    printf("number = %d, ctr = %u\n", number, ctr);
    print2();

    return 0;
}

void print2(void)
{
    int number = 4321;
    unsigned ctr = 1234;

    printf("number = %d, ctr = %u\n", number, ctr);
}
