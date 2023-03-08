#include "main.h"
/**
 * _strlen - determines length of string
 * @s: the string to check
 *
 * Return: the integer length
 */
int _strlen(char *s)
{
	return (*s ? 1 + _strlen(s + 1) : 0);
}

/**
 * palindrome - recursive palindrome check
 * @s: the string to check
 * @l: the string length
 * @i: the string iterator
 *
 * Return: 1 if true, 0 if false
 */
int palindrome(char *s, int l, int i)
{
	if (i >= l / 2)
		return (1);
	if (*(s + i) == *(s + l - i - 1))
		return (palindrome(s, l, i + 1));
	return (0);
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if true, 0 if false
 */
int is_palindrome(char *s)
{
	int l = _strlen(s);

	return (palindrome(s, l, 0));
}
