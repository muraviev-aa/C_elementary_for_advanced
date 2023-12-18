// 58. Считаем время с момента запуска программы
#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
    clock_t timer; // clock_t - псевдоним типа long

    system("pause");

    // возвращает кол-во тактов, прошедших с момента запуска программы
    timer = clock();
    printf("Clocks after start of program is %ld\n", timer);
    printf("This is %.3f sec", (double)timer/CLOCKS_PER_SEC);

    return 0;
}
