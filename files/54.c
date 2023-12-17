// 54. Определение времени №4
#include <stdio.h>
#include <time.h>

int main()
{
    time_t tNow;
    char * strTime;
    struct tm * tm1;

    time(&tNow);
    strTime = ctime(&tNow);
    printf("Time is %s\n", strTime);

    // struct tm * localtime( const time_t * num );
/*
struct tm
{
	int	tm_sec;		// Seconds: 0-59
	int	tm_min;		// Minutes: 0-59
	int	tm_hour;	// Hours since midnight: 0-23
	int	tm_mday;	// Day of the month: 1-31
	int	tm_mon;		// Months *since* january: 0-11
	int	tm_year;	// Years since 1900
	int	tm_wday;	// Days since Sunday (0-6)
	int	tm_yday;	// Days since Jan. 1: 0-365
	int	tm_isdst;	// +1 Daylight Savings Time, 0 No DST,-1 don't know
};
*/
    tm1 = localtime(&tNow);
    printf("%02d:%02d:%02d\n", tm1->tm_hour, tm1->tm_min, tm1->tm_sec);
    printf("%02d.%02d.%02d\n", tm1->tm_mday, tm1->tm_mon+1, tm1->tm_year+1900);
    printf("%d day of year\n", tm1->tm_yday+1);

    return 0;
}
