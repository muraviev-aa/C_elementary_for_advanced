// 62. Возвращаем более одного значения из функции
// Воспользуемся передачей переменных по адресу
// Разберем, в качестве примера, решение квадратного уравнения

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int func(int a, int b, int c, double * root1, double * root2);

int main()
{
    int a, b, c; // коэффициенты
    a = 1; b = -2; c = 1;
    double k1, k2; // корни уравнения
    int result;
    result = func(a, b, c, &k1, &k2);
    if(result == 1)
        puts("No roots!");
    else if(result == 2)
        printf("Root1 = Root2 = %f", k1);
    else if(result == 3)
        printf("Root1 = %k1\nRoot2 = %f", k1, k2);

    return 0;
}

int func(int a, int b, int c, double * root1, double * root2)
{
    int discr;
    discr = pow(b, 2) - 4 * a * c;
    if(discr < 0)
        return 1;
    else if(discr == 0)
    {
        *root1 = -b / (2*a);
        *root2 = *root1;
        return 2;
    }
    else if(discr > 0)
    {
        *root1 = (-b + sqrt(discr));
        *root2 = (-b - sqrt(discr));
        return 3;
    }

    return 0;
}
