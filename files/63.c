// 63. Использование ф-ии GetVolumeInformation()
#include <stdio.h>
#include <windows.h>

// https://docs.microsoft.com/en-us/windows/desktop/api/fileapi/nf-fileapi-getvolumeinformationa
/*
BOOL GetVolumeInformation(
  char          * lpRootPathName, // //путь к тому, например "C:\\"
  char          * lpVolumeNameBuffer, // строка для записи пути, например name
  unsigned long   nVolumeNameSize, // размер строки для записи метки тома, например sizeof(name)
  unsigned long * lpVolumeSerialNumber, // серийный номер тома, например &serial
  unsigned long * lpMaximumComponentLength, // максимальная длина имени файла, например &maxLength
  unsigned long * lpFileSystemFlags, // флаг, например &flag
  unsigned long * lpFileSystemNameBuffer, // название файловой системы, например fileSystem
  unsigned long   nFileSystemNameSize // размер под название файловой системы, например sizeof(fileSystem)
);
*/

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char name[MAX_PATH];
    char fileSystem[MAX_PATH];
    unsigned long serial;
    unsigned long maxLength;
    unsigned long flag;
    int result;

    result = GetVolumeInformation("C:\\", name, sizeof(name),
                                  &serial, &maxLength, &flag,
                                  fileSystem, sizeof(fileSystem));

    if(result != 0)
        printf("%s\n", "Функция корректно завершилась!\n");
    else
        printf("Функция не могла вернуть какую-то информацию\n");

    printf("%s\n", name);
    printf("Серийный номер: %lu\n", serial);
    printf("Файловая система: %s\n", fileSystem);
    printf("Максимальная длина имени файла: %lu\n", maxLength);

    return 0;
}
