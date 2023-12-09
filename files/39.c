// 39. Связь массивов и указателей

#include <stdio.h>

int main()
{
    // создали массив и вывели его на экран
    int arr[4] = {-1, 2, 4, 7};
    for(unsigned i=0; i<4; i++)
        printf("arr[%u] = %d\n", i, arr[i]);
    /*
    Имя массива это переменная, хранящая адрес
    первого элемента, тот что arr[0]
    */
    printf("\nAddress arr[0] is %lu\n", &arr[0]);
    printf("Address arr is %lu\n\n", arr);

    // Арифметика указателей. Смещение на sizeof(int)
    printf("Address of arr[1] is %lu, value arr[1] is %d\n", arr+1, *(arr+1));
    printf("Address of arr[2] is %lu, value arr[2] is %d\n", arr+2, *(arr+2));
    printf("Address of arr[3] is %lu, value arr[3] is %d\n\n", arr+3, *(arr+3));

    return 0;
}
