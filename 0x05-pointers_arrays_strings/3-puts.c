#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: no return.
 */
void _puts(char *str)
{
	int var = 0;

	while (var >= 0)
	{
		if (str[var] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[var]);
		var++;
	}
}
