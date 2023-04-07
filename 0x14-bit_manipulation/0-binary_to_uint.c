#include "main.h"

/**
 * _strlen - lenght of string
 * @s:char
 * Return:int
 */
int _strlen(const char *s)
{
	int i;

		for (i = 0; s[i] != '\0'; i++)
		{
			continue;
		}
return (i);
}
/**
 * binary_to_uint - convert binary to unsigned int
 * @b:string from 0 and 1 else NULL
 *
 * Return:unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 1;
	unsigned int i = 0;
	int a;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = _strlen(b);

	for (a = len - 1; a >= 0; a--)
	{
	if (b[a] != '0' && b[a] != '1')
		return (0);
	if (b[a] == '1')
	{
		i += j;
	}
	j *= 2;
}
	return (i);
}
