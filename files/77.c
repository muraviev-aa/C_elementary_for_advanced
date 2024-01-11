// 77. Чтение значений из строки. Ф-ия sscanf() №2
// sscanf считывает числовые значения и слова из форматированной строки,
// позволяя анализировать текст из других источников
// sscanf() использует точно такие же спецификаторы формата, что и printf
// спецификатор %s обозначает указатель на строку
// спецификатор %d обозначает указатель на переменную

#include <stdio.h>

int main()
{
    int val;
    char result[10];
    char string[25] = "The first number is 1";

    if (sscanf (string, "The %s number is %d", result, &val) == 2)
        printf("String : %s Value : %d", result, val);
    else
        printf("I couldn't find two values in that string\n");

    return 0;
}
