#include <stdio.h>
#include "main.h"

int main(void)
{
    char c = 'a';

    if (_isalpha(c))
        printf("%c is a letter\n", c);
    else
        printf("%c is not a letter\n", c);

    return 0;
}
