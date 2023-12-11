// 42. Работа с нотацией массивов и нотацией указателей

#include <stdio.h>
#define NUM 5

int main()
{
    int myArray[NUM] = {1, 3, 10, 11, 15};
    int ctr;

    puts("Array notation:");
    for(ctr=0; ctr<NUM; ctr++)
        printf("%d\n", myArray[ctr]);

    puts("\nPointers notation:");
    for(ctr=0; ctr<NUM; ctr++)
        printf("%d\n", *(myArray+ctr));

    return 0;
}
