// 72. Запись в строки. Ф-ия sprintf()
// Записываем произвольный текст в строковые переменные
// Функция sprintf() автоматически добавляет терминальный ноль
// в конец созданной строки
#include <stdio.h>

int main()
{
    int val = 111;
    char string[40];

    sprintf(string, "The value of val is %d", val);
    printf("%s\n", string);

    return 0;
}
