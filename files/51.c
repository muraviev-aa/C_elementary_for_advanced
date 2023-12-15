// 51. Определение времени №1
#include <stdio.h>
#include <time.h>

int main()
{
    time_t tNow;
    // прототип функции time_t time(time_t * num)
    time(&tNow); // первый вариант
    //tNow = time(NULL); // второй вариант

    printf("Time is %lld sec after Unix era\n", tNow);
    return 0;
}
