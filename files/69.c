// 69. Пример работы с указателем №3
#include <stdio.h>

int sumAndDiff(int a, int b, int *res)
{
    int sum;
    sum = a + b;
    *res = a - b;
    return sum;
}

int main()
{
    int b = 2;
    int diff;

    printf("The sum of 5 and %d is %d\n", b, sumAndDiff(5, b, &diff));
    printf("The difference of 5 and %d is %d\n", b, diff);

    return 0;
}
