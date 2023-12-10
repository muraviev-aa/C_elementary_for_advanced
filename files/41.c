// 41. Массивы символов. Имя массива - переменная указатель

#include <stdio.h>

int main()
{
    // Массив символов
    char str[10] = "My string";

    // int puts(const char*) прототип функции puts()
    // функция puts() принимает указатель на char
    // и выводит символы до нахождения '\0'
    puts(str);

    printf("Enter new string. No more than %zu characters\n", sizeof(str)-1);
    // Введем новое значение для строки
    // Перед str не нужен знак & т.к. str это указатель
    scanf(" %9s", str);
    puts(str);

    return 0;
}
