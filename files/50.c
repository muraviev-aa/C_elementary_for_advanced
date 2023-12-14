// 50. Защита массива от изменения
#include <stdio.h>

int main()
{
    const int myArr[] = {1, 2, 3, 4, 5};
    // myArr[3] = 100; // не скомпилируется
    scanf(" %d", &myArr[0]); // скомпилируется
    printf("myArr[0] = %d", myArr[0]);

    return 0;
}
