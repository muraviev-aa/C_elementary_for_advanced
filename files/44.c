// 44. Передача массива в функцию №2
#include <stdio.h>

/*
В функцию передается не сам массив, как единый набор чисел,
а только адрес первого элемента массива и отдельно общее
количество элементов
*/

void printArray(int * array, size_t num)
{
    unsigned ctr;
    for(ctr=0; ctr<num; ctr++)
        printf("%d ", *(array+ctr));
}

int main()
{
    int money[] = {-12, 22, -9, 8, 0, 10};
    printArray(money, sizeof(money)/sizeof(money[0]));

    return 0;
}
