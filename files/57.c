// 57. Определение времени №7
#include <stdio.h>
#include <time.h>

int main()
{
// time_t time(time_t * timeptr)
// struct tm * localtime(const time_t * num)
// time_t mktime(struct tm * num)
/*
struct tm
{
	int	tm_sec;		// Seconds: 0-59 (K&R says 0-61?)
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
    time_t tNow;
    struct tm * tm1;
    int day, mon, year;

    time(&tNow);

    // ввели данные о дне, месяце и годе
    printf("Input number of day: ");
    scanf(" %d", &day);
    printf("Input number of month: ");
    scanf(" %d", &mon);
    printf("Input number of year: ");
    scanf(" %d", &year);

    // инициализировали указатель
    tm1 = localtime(&tNow);

    // обновили данные в полях структуры
    tm1->tm_mday = day;
    tm1->tm_mon = mon - 1;
    tm1->tm_year = year - 1900;

    // обновили все поля структуры tm1 исходя из новой информации
    mktime(tm1);
    printf("Day of week is %d\n", tm1->tm_wday);

    return 0;
}
