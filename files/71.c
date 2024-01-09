// 71. Использование указателя для соединения двух строк
#include <stdio.h>

int main()
{
    char str1[10] = "first";
    char str2[10] = "second";
    char str3[20];

    char *src, *dst;

    src = str1; // src стартует в начале str1 («f» в слове «first»)
    dst = str3; // dst стартует в начале пустой строки str3
    /*
    выполняем цикл, копируя содержимое src в dst, а затем перемещая оба
    указателя вперед на один, пока не найдем ноль, завершающий строку str1
    */
    while(*src != 0)
    {
        *dst = *src;
        src++;
        dst++;
    }

    src = str2; // src стартует в начале str2 («s» в слове «second»)
    while(*src != 0)
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = 0; // терминальный ноль

    printf("%s + %s = %s\n", str1, str2, str3);

    return 0;
}
