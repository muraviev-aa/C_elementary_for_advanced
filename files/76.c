// 76. Чтение значений из строки. Ф-ия sscanf()
// ‘string scan formatted’ - форматированный ввод из строки
// int sscanf(const char *str, const char *format, ...);
// *str - строка, которая будет парсится
// *format - последующие аргументы являются указателями на переменные,
// куда будут сохранены данные, считанные со строки
// используется спецификатор %d для чтения десятичного значения 250 из строки

#include <stdio.h>

int main()
{
    int val;
    char string[10] = "250";

    sscanf(string, "%d", &val);
    printf("The value in the string is %d\n", val);

    return 0;
}
