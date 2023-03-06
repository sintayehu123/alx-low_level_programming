#include "main.h"
/**
 * _strchr - Entry point
 * Desc: Entry
 *@s: pointer
 *@c: string
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
