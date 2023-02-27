#include "main.h"

/**
 * print string
 * dtring
 *
 * Return the length
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

