#include <stdio.h>
#include <string.h>

int main()
{
    // local structure prototype
    struct account
    {
        char name[20];
        char bank[40];
        unsigned euro;
    };

    struct account myMoney;

    strcpy(myMoney.name, "Dr_Alban");
    strcpy(myMoney.bank, "Real Bank");
    myMoney.euro = 1000;

    printf("Mr. %s have %d euro in \"%s\"\n", myMoney.name, myMoney.euro, myMoney.bank);

    return 0;
}
