#include <stdio.h>

int main()
{
    struct book
    {
        char title[10];
        unsigned pages;
    };

    struct book myBook;

    printf("%lu\n", &myBook.title);
    printf("%lu\n\n", &myBook);
    printf("%lu\n", &myBook.pages);
    printf("%zu\n", sizeof(myBook));

    return 0;
}
