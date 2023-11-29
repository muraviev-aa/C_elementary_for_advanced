#include <stdio.h>

int giVar1;
int giVar2;

void printGlobal(void);

int main()
{
    printf("giVar1 = %d\n", giVar1);
    printf("giVar2 = %d\n\n", giVar2);

    printGlobal();
    return 0;
}

void printGlobal(void)
{
    printf("giVar1 = %d\n", giVar1);
    printf("giVar2 = %d\n", giVar2);
}
