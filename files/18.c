#include <stdio.h>

void printNum(void);

int main()
{
    int ctr;

    printf("y N\n");
    for(ctr=0; ctr<20;ctr++)
        printNum();

    return 0;
}

void printNum(void)
{
    static int count = 1;
    int y = 1;

    printf("%d %d call\n", y++, count++);
}
