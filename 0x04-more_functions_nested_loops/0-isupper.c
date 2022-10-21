#include "main.h"
/**
 * _isupper - Function that checks for uppercase character.
 * @c: is the character input
 * Return: 1 if c is uppercase, return 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
