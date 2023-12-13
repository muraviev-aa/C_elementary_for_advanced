// 48. Передача переменной по адресу (по указателю)
#include <stdio.h>

// знак * говорит о том, что мы передаем указатель
int inc(int * iNum)
{
    // т.к. в функцию передан указатель (адрес),
    // то его нужно превратить в значение (разыменовать)
    // поставив перед переменной-указателем *
    *iNum = *iNum + 1;

    return *iNum;
}

int main()
{
    int number = 2;
    printf("number before function inc() = %d\n", number);
    // знак & перед аргументом указывает на передачу по адресу
    printf("number after function inc() = %d\n", inc(&number));
    return 0;
}
