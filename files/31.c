// 31. Присваивание переменных-структур

#include <stdio.h>

int main()
{
    struct money
    {
        int euro;
        int usd;
    } petrov, ivanov, sidorov; // 1-я, 2-я, 3-я структура

    // Присвоили значения полям 1-й структуре
    petrov.euro = 1000;
    petrov.usd = 2000;
    printf("petrov have %d euro, %d usd\n\n", petrov.euro, petrov.usd);

    // Присвоили значения полям 2-й структуре (не оптимально)
    ivanov.euro = petrov.euro;
    ivanov.usd = petrov.euro;
    printf("ivanov have %d euro, %d usd\n\n", ivanov.euro, ivanov.usd);

    // Присвоили значения 3-ей структуре (оптимально)
    sidorov = petrov;
    printf("sidorov have %d euro, %d usd\n", sidorov.euro, sidorov.usd);

    return 0;
}
