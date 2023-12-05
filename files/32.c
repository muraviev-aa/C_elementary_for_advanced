// 32. Безымянные структуры

#include <stdio.h>
#include <string.h> // для strcpy() и memcpy()

int main()
{
    struct // безымянная структура
    {
        char name[20];
        int money;
    } person1, person2;

    strcpy(person1.name, "Ivanov");
    person1.money = 1000;

    char text[20] = "Sidorov";
    memcpy(person2.name, text, 20); // скопировать 20 байт их text в person2.name
    person2.money = 2000;

    // %-10s выделить под строку 10 знакомест и выровнять по левому краю
    printf("%-10s have %d euro\n", person1.name, person1.money);
    printf("%-10s have %d euro\n", person2.name, person2.money);

    return 0;
}
