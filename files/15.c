#include <stdio.h>

void printVar(void);

double num = 12.348;

int main()
{
    printVar();

    return 0;
}

void printVar(void)
{
    printf("%.3f\n", num);
}
