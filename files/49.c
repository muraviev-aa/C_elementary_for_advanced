// 49. Передача массива в функцию №4
#include <stdio.h>
#define SIZEARR(x) (sizeof(x) / sizeof(x[0]))

void printArray(int * array, unsigned num)
{
    for(unsigned ctr=0; ctr<num; ctr++)
        printf(" %d", *(array+ctr));
}

void incArray(int * array, size_t num)
{
    for(unsigned ctr=0; ctr<num; ctr++)
        array[ctr]++;
}

int main()
{
    int myArr[] = {-1, 2, 3, 4, -5};
    printArray(myArr, SIZEARR(myArr));
    incArray(myArr, SIZEARR(myArr));
    putchar('\n');
    printArray(myArr, SIZEARR(myArr));

    return 0;
}
