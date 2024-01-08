// 66. Определение площади пересечения двух кругов
#include <stdio.h>
#include <math.h>

int main()
{
    long double area = 0.0; // площадь пересечения в мм^2
    double x, y;            // координаты проверяемой точки
    double x1 = 2000.0;     // координата x центра первой окружности в мм
    double y1 = 2000.0;     // координата y центра первой окружности в мм
    double x2 = 4000.0;     // координата x центра второй окружности в мм
    double y2 = 2000.0;     // координата y центра второй окружности в мм
    int r1, r2;             // радиусы окружностей в мм
    r1 = r2 = 2000;

    for(x=0; x<=6000; x+=0.1)
    {
        for(y=0; y<=4000; y+=0.1)
        {
            if((pow((x-x1), 2) + pow((y-y1), 2) <= pow(r1, 2)) &&
               (pow((x-x2), 2) + pow((y-y2), 2) <= pow(r2, 2)))
                area+=0.01;
        }
    }

    printf("Area is %.2lf mm^2\n", area);
    return 0;
}