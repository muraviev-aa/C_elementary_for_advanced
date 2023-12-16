// 52. Определение времени №2
#include <stdio.h>
#include <time.h>

int main()
{
    // time_t time(time_t * timeptr)
    // char * ctime(const time_t * num)

    time_t tNow;
    char * strTime;

    time(&tNow);
    strTime = ctime(&tNow);
    printf("Time is %s\n", strTime);

    return 0;
}
