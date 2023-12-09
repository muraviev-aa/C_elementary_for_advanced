// 38. Передача массива в функцию. Нахождение суммы всех элементов массива

#include <stdio.h>

#define MAX 5

int summa(int * array); // в функцию передается указатель на int, а имя массива это указатель

int main()
{
    int my_array[MAX] = {30, 1, 3, -8, -5};
    // в функцию передан массив my_array
    printf("Summa of all elements \"my_array\" is %d\n", summa(my_array));

    return 0;
}

int summa(int * array)
{
    int total = 0, count;

    for(count=0; count<MAX; count++)
        total += array[count];

    return total;
}
