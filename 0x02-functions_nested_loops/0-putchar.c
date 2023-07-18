#include <stdio.h>

int _putchar(char c) {
    return write(1, &c, 1);
}

void print_alphabet_x10(void) {
    for (int i = 0; i < 10; i++) {
        for (char c = 'a'; c <= 'z'; c++) {
            _putchar(c);
        }
    }
    _putchar('\n');
}

int main() {
    print_alphabet_x10();
    return 0;
}
#include "main.h"

/**
 * main - A function that prints _Putchar
 *
 * Return: 0 Success
 */

int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}
