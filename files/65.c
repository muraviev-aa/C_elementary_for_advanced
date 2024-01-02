// 65. Ф-ия WriteConsole() WIN32 API

#include <windows.h>
#define STRLEN(x) (sizeof(x)/sizeof(char) - 1)

/*
BOOL WINAPI WriteConsole
(
  _In_             HANDLE  hConsoleOutput, // дескриптор буфера экрана консоли
  _In_       const VOID    *lpBuffer, // указатель на буфер, содержащий символы для записи в буфер экрана консоли
  _In_             DWORD   nNumberOfCharsToWrite, // количество записываемых символов
  _Out_opt_        LPDWORD lpNumberOfCharsWritten, // указатель на переменную, которая получает количество фактически записанных символов
  _Reserved_       LPVOID  lpReserved // зарезервировано
);
*/

int main()
{
    const char str[] = "Hello!\n";
    unsigned long count = 0;
    HANDLE hStdout;
    hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

    WriteConsole(hStdout, str, STRLEN(str), &count, NULL);

    ExitProcess(0);
}
