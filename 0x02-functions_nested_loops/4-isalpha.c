#include "main.h"

/**
 * _isalpha - Checks for aphabetic character
 * @c: The character to be chcecked
 * Return: 1 for alphabetic character or 0 for anything else
 */

int _isalpha(int c)
{

if ((c >= 66 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
