#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
	int var = 0, i, j;
	char *str, temp;

	while (var >= 0)
	{
		if (s[var] == '\0')
			break;
		var++;
	}
	str = s;

	for (i = 0; i < (var - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str + j);
			*(str + j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
