// 59. Строка как массив символов, строковая константа, как указатель на символ
#include <stdio.h>

int main()
{
    char str[] = "Hello, World!";
    puts(str);

    puts("Hello, World!");

    char * pStr = "Hello, World!";
    pStr = "Hello from pointer!";
    puts(pStr);

    return 0;
}
