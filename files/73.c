// 73. Работа со строками. Ф-ии strcpy(), strcat()
//
// ‘string copy’- копирует строку второго аргумента в начало строки первого аргумента
// char * strcpy( char * destptr, const char * srcptr );
// *destptr - указатель на строку назначения, куда будет скопирована строка-источник
// *srcptr - указатель на копируемую строку
//
// ‘string concatenate’- соединяет две строки вместе
// char * strcat( char * destptr, const char * srcptr );
// *destptr - указатель на строку назначения, к которой добавятся символы строки
// *srcptr - строка, которая добавляется в конец строки

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[10] = "first";
    char str2[10] = "second";
    char str3[20];

    strcpy(str3, str1);
    strcat(str3,str2);

    printf("%s + %s = %s\n", str1, str2, str3);

    return 0;
}
