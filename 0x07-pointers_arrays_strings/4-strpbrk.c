#include "main.h"

/**
 * _strpbrk - Entry point
 * Desc: Entry
 *@s: pointer
 *@accept: pointer
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
