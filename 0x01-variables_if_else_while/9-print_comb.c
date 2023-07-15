#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0 success
 */
int main(void)
{
int n;
do {
putchar(48 + n);
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
} while (n <= 9);
putchar('\n');
return (0);
}
