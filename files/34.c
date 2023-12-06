// 34. Простое использование псевдонимов

#include <stdio.h>

// Задаем псевдонимы
typedef int INTEGER;
typedef double REAL;

int main()
{
    INTEGER id = 100;
    REAL money = 12.23;

    printf("ID %d have %.2f$\n", id, money);

    return 0;
}
