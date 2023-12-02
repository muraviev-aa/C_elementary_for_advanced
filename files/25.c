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

    printf("Label - Address - Size\n");
    printf("\"name\" - %lu - %zu\n", &myMoney.name, sizeof(myMoney.name));
    printf("\"bank\" - %lu - %zu\n", &myMoney.bank, sizeof(myMoney.bank));
    printf("\"euro\" - %lu - %zu\n\n", &myMoney.euro, sizeof(myMoney.euro));

    printf("myMoney - %lu - %zu\n", &myMoney, sizeof(myMoney));

    return 0;
}
