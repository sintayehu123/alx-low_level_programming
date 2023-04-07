#include "holberton.h"

/**
 * flip_bits -
 *
 * Return: a
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pow = n ^ m;
	unsigned int a = 0;

	while (pow > 0)
	{
		a += (pow & 1) ? 1 : 0;
		pow = pow >> 1;
	}
	return (a);

}
