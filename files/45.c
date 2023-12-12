// 45. Передача массива в функцию №3

#include <stdio.h>
#define SIZEARR(x) (sizeof(x) / sizeof(x[0]))

int money[] = {100, -2, 56};

void printArray(int * array, size_t num)
{
    unsigned ctr;
    for(ctr=0; ctr<num; ctr++)
        printf("%d ", *(array+ctr));
}

int main()
{
    int account[] = {100, 200, 300, 400, 500};
    printArray(money, SIZEARR(money));
    putchar('\n');
    printArray(account, SIZEARR(account));

    return 0;
}
