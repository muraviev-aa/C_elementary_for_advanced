// 33. Выравнивание разных типов данных

#include <stdio.h>
#include <stdalign.h>

int main()
{
    // Базовые типы выравниваются по их размеру
    printf("Align of double is %zu\n", alignof(double));
    printf("Align of float is %zu\n", alignof(float));
    printf("Align of long long is %zu\n", alignof(long long));
    printf("Align of long is %zu\n", alignof(long));
    printf("Align of int is %zu\n", alignof(int));
    printf("Align of short is %zu\n", alignof(short));
    printf("Align of char is %zu\n", alignof(char));

    // Как выравнивается структура?
    // Обычно по размеру наибольшего типа данных
    struct company
    {
        short part;
        int number;
        char letter;
    };

    printf("Align of struct company is %zu\n", alignof(struct company));

    return 0;
}
