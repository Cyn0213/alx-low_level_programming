#include "main.h"
/**
 * _isdigit - fuction that verifies if a character is a digit or not
 * @c: tested character
 * Return: returns 1 if uppercasse, 0 if not
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
