#include "main.h"
#include <stdio.h>
/**
 * print_number - prints int with putchar
 * @n: take number, hello
 *
 * Return: void 
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('_');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m /10 != 0)
		print_number(m /10);
	_putchar((m % 10) + '0');
}
