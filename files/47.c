// 47. Передача переменной по значению (по копии)
#include <stdio.h>

int change(int number)
{
    number += 100;
    printf("Value in function = %d\n", number);
    return number;
}

int main()
{
    int count = 11;
    printf("Value after function = %d", change(count));
    return 0;
}
