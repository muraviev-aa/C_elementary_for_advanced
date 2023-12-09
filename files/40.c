// 40. Массивы и указатели

#include <stdio.h>

#define NUM 4

int main()
{
    long long arr[NUM];
    unsigned i;

    puts("Work with array without pointers:");
    for(i=0; i<NUM; i++)
    {
        arr[i] = i;
        printf("arr[%u] = %lld\n", i, arr[i]);
    }

    puts("\nWork with array with pointers:");
    for(i=0; i<NUM; i++)
    {
        *(arr+i) = NUM-1-i; // записать по адресу (arr+i) значение NUM-1-i
        printf("arr[%u] = %lld\n", i, *(arr+i)); // вывести значение, хранящееся по адресу (arr+i)
    }

    return 0;
}
