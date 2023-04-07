#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n : unsigned long int
 * @m : unsigned long int
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int pow;
	int i = 0;

	pow = n ^ m;
	while (pow >= 1)
	{
		if ((pow & 1) == 1)
		i++;
		pow >>= 1;
	}
	return (i);
}
