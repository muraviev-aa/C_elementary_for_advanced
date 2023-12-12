// 43. Передача массива в функцию №1
#include <stdio.h>

/*
В функцию передается не сам массив, как единый набор чисел,
а только адрес первого элемента массива и отдельно общее
количество элементов
*/
void printArray(int * array, unsigned num)
{
    unsigned ctr;
    for(ctr=0; ctr<num; ctr++)
        printf("%d ", *(array+ctr));
}

int main()
{
    int money[] = {-11, 12, 0, 34, 52};
    printArray(money, 5);

    money[0] = 100;
    money[2] = 111;
    putchar('\n');
    printArray(money, 5);

    return 0;
}
