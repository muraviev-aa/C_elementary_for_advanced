// 55. Определение времени №5
#include <stdio.h>
#include <time.h>

int main()
{
    time_t tNow;
    struct tm * tm1;

    time(&tNow);
    tm1 = localtime(&tNow);

    printf("%02d:%02d:%02d\n", tm1->tm_hour, tm1->tm_min, tm1->tm_sec);
    printf("%02d.%02d.%02d\n", tm1->tm_mday, tm1->tm_mon+1, tm1->tm_year+1900);
    printf("%d day of year\n\n", tm1->tm_yday);

    // определение дня недели c использованием оператора switch
    switch (tm1->tm_wday)
    {
        case 0 : printf("Day of the week sunday\n"); break;
        case 1 : printf("Day of the week monday\n"); break;
        case 2 : printf("Day of week tuesday\n"); break;
        case 3 : printf("Day of week wednesday\n"); break;
        case 4 : printf("Day of week thursday\n"); break;
        case 5 : printf("Day of week friday\n"); break;
        case 6 : printf("Day of week saturday\n"); break;
    }

    // определение дня недели с использованием оператора if else
    if(tm1->tm_wday == 0)
        printf("Day of the week sunday\n");
    else if(tm1->tm_wday == 1)
        printf("Day of the week monday\n");
    else if(tm1->tm_wday == 2)
        printf("Day of week tuesday\n");
    else if(tm1->tm_wday == 3)
        printf("Day of week wednesday\n");
    else if(tm1->tm_wday == 4)
        printf("Day of week thursday\n");
    else if(tm1->tm_wday == 5)
        printf("Day of week friday\n");
    else if(tm1->tm_wday == 6)
        printf("Day of week saturday\n");

    return 0;
}
