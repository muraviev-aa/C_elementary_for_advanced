// 35. Объявление и инициализация указателя на переменную

#include <stdio.h>

int main()
{
    int iNum = 10;
    unsigned long address;

    address = (long)&iNum;

    printf("iNum = %d\n", iNum);
    printf("Address of iNum is %p\n\n", address);

    /*
    Объявляем указатель на целое число типа int
    знак * перед именем переменной означает, что это
    указатель, при этом знак * не является частью имени
    */
    int * ptr;
    // Инициализируем его адресом переменной iNum
    ptr = &iNum;

    printf("Address of iNum is %p\n", ptr);

    /*
    Чтобы узнать, на какое значение ссылается указатель
    необходимо произвести операцию "разыменование"
    */
    printf("iNum = %d\n", *ptr);

    return 0;
}
