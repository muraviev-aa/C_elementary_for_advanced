#include <stdio.h>

// global structure prototype
struct account
{
    char name[20];
    char bank[40];
    unsigned euro;
};

int main()
{
    struct account myMoney = {"Dr_Alban", "Real Bank", 1000};

    printf("Mr. %s have %d euro in \"%s\"\n", myMoney.name, myMoney.euro, myMoney.bank);

    return 0;
}
