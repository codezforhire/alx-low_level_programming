#include "main.h"

/**
 * _islower - Checks that the character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 for anything else.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
