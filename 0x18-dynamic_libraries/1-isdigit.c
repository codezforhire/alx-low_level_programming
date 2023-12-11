#include "main.h"

/**
  * _isdigit - Check if numbers are 0 - 9
  * @c: The number to be checked
  *
  * Return: 1 if c is a digit, otherwise 0
  */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	return (0);
}
