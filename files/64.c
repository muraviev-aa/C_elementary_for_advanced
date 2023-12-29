// 64. WIN API, ф-ия GetTickCount()
// GetTickCount() считает количество миллисекунд с момента запуска системы
// DWORD GetTickCount()

#include <stdio.h>
#include <windows.h>

void timeStart(DWORD millTime);

int main()
{
    DWORD myTime = 0;
    myTime = GetTickCount();
    printf("%lu since the system was started\n", myTime);
    timeStart(myTime);
    return 0;
}

void timeStart(DWORD millTime)
{
    DWORD day, hour, min, sec, millsec, result;
    result = millTime;
    millsec = result%1000;
    result = result/1000;
    sec = result%60;
    result = result/60;
    min = result%60;
    result = result/60;
    hour = result%24;
    day = result/24;
    printf("%lu day, %lu hour, %lu min, %lu sec, %lu millsec", day, hour, min, sec, millsec);
}

