// 75. Работа со строками. Сравнение строк  №2
// функция strcmp()
// ‘string compare’ - сравнение строк
// int strcmp( const char * string1, const char * string2 );
// *string1 - указатель на первую строку
// *string2 - указатель на вторую строку
// ф-ия возвращает ноль если обе строки равны
// значение больше нуля указывает на то, что строка string1 больше строки string2
// значение меньше нуля свидетельствует об обратном

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "first";
    char str2[10] = "fire";

    if(strcmp(str1, str2) == 0)
        printf("The two strings are identical\n");
    else
        printf("The two string are different\n");

    return 0;
}
