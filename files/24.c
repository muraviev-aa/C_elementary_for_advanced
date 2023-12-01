#include <stdio.h>

struct account
{
    char name[20];
    char bank[40];
    unsigned euro;
} myMoney = {"Dr_Alban", "Real Bank", 1000};

int main()
{
    printf("Mr.%s have %d euro in \"%s\"\n\n", myMoney.name, myMoney.euro, myMoney.bank);
    printf("Address \"name\" - %lu\n", &myMoney.name);
    printf("Address \"bank\" - %lu\n", &myMoney.bank);
    printf("Address \"euro\" - %lu\n\n", &myMoney.euro);

    printf("Address \"myMoney\" - %lu\n", &myMoney);
    return 0;
}
