#include "main.h"

/**
 * puts2 - function prints every other character in string
 * @str: input
 *
 * Return: print
 */

void puts2(char *str)
{
	int i;
	
	i=0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
