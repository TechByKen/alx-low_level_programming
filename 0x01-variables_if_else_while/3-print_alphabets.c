#include <stdio.h>
/**
 * main - Main function
 *
 * Return: 0 Always
 */
int main(void)
{

char lowercase;
char uppercase;

for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
putchar(lowercase);

for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
putchar(uppercase);

putchar('\n');
return (0);
}
