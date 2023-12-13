// 46. Возведение вещественного числа в степень с использованием функции
#include <stdio.h>

double power(double dNum, unsigned uRate);

int main()
{
    printf("%f\n", power(1.2, 2));
    printf("%f\n", power(3, 3));
    return 0;
}

double power(double dNum, unsigned uRate)
{
    double result = 1;
    for(unsigned ctr=0; ctr<uRate; ctr++)
        result *= dNum;
    return result;
}
