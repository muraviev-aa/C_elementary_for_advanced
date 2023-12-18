// 56. Определение времени №6
#include <stdio.h>
#include <time.h>

int main()
{
    time_t tNow;
    struct tm * tm1;
    char * names[] =
    {
        "sunday",    // 0
        "monday",    // 1
        "tuesday",   // 2
        "wednesday", // 3
        "thursday",  // 4
        "friday",    // 5
        "saturday"   // 6
    };

    time(&tNow);
    tm1 = localtime(&tNow);

    printf("Day of the week %s\n", names[tm1->tm_wday]);

    return 0;
}
