// 60. Устанавливаем локаль
// локаль - набор правил интерпретации и работы с региональными данными
// char * setlocale(int category, const char * locale);
#include <stdio.h>
#include <locale.h>

int main()
{
    char * result; // здесь будем хранить результат вызова setlocal
    /*
    #define	LC_ALL		0  использовать все настройки локали
    #define LC_COLLATE	1
    #define LC_CTYPE	2
    #define	LC_MONETARY	3
    #define	LC_NUMERIC	4
    #define	LC_TIME		5
    #define	LC_MIN		LC_ALL
    #define	LC_MAX		LC_TIME
    */
    result = setlocale(LC_ALL, NULL);
    printf("First of all we use %s locale!\n", result);

    // "" - взять настройки из текущих настроек ОС
    result = setlocale(0, "");
    printf("After changing the locale - %s\n", result);

    return 0;
}
