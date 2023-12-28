// 64. WIN API, ф-ия GetTickCount()
// GetTickCount() считает количество миллисекунд с момента запуска системы
// DWORD GetTickCount()

#include <stdio.h>
#include <windows.h>

void printFormat(DWORD millTime)
{
    DWORD day, hour, min, sec, millsec;
    millsec = millTime%1000;
    sec = (millTime/1000)%60;
    min = ((millTime/1000)/60)%60;
    hour = (((millTime/1000)/60)/60)%24;
    day =(millTime/1000)/(60*60*24);
    printf("%lu days, %lu hour, %lu min, %lu sec, %lu millsec\n", day, hour, min, sec, millsec);
}

int main()
{
    DWORD myTime = 0;
    myTime = GetTickCount();
    printf("%lu since the system was started\n", myTime);
    printFormat(myTime);
    return 0;
}
