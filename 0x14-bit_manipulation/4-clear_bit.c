#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 *
 * @n: pointer to number
 * @index: position
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	a = a << index;
	*n = *n & ~a;
	return (1);
}
