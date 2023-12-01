#include <stdio.h>

struct account
{
    char name[20];
    char bank[40];
    unsigned euro;
} myMoney = {"Dr_Alban", "Real Bank", 1000};

int main()
{
    printf("Mr.%s have %d euro in \"%s\"\n", myMoney.name, myMoney.euro, myMoney.bank);
    return 0;
}
