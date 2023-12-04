// Вложенные структуры и массив таких структур

#include <stdio.h>

#define NUM 2

struct date
{
    int day;
    int month;
    int year;
};

struct name
{
    char first[20];
    char last[20];
};

struct account
{
    unsigned id;
    struct date dateOfOpen;
    struct name nameOfClient;
    int money;
};

struct account ipBank[NUM];

int main()
{
    for(int n=0; n<NUM; n++)
    {
        ipBank[n].id = n;

        printf("Enter date of open %d account (dd mm yyyy)\n", n+1);
        scanf("%d %d %d", &ipBank[n].dateOfOpen.day,
                          &ipBank[n].dateOfOpen.month,
                          &ipBank[n].dateOfOpen.year);

        printf("Enter first and last name of owner\n");
        scanf("%s %s", ipBank[n].nameOfClient.first,
                       ipBank[n].nameOfClient.last);

        printf("How much money this person has?\n");
        scanf("%d", &ipBank[n].money);
    }

    printf("id\tmoney\n");
    for(int num=0; num<NUM; num++)
        printf("%d\t%d\n", ipBank[num].id, ipBank[num].money);

    return 0;
}
