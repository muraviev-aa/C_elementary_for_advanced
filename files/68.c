// 68. Пример работы с указателем №2
#include <stdio.h>

int main()
{
    int intVal = 111222333;
    void *vPtr = &intVal;

    printf("The value at vPtr as an int is %d\n", *((int *)vPtr));
    printf("The value at vPtr as a char is %d\n", *((char *)vPtr));

    return 0;
}
