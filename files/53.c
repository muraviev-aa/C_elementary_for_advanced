// 53. Определение времени №3
#include <stdio.h>
#include <time.h>

void printTime(time_t * tNow)
{
    char *  strTime;
    time(tNow);
    strTime = ctime(tNow);
    printf("Time is %s\n", strTime);
}

int main()
{
    time_t timer;
    printTime(&timer);
    return 0;
}
