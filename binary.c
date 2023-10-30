#include "main.h"
#include<stdio.h>
/**
 * unprint - print an unsigned number
 * @ar: variable argument passed to unprint
 * Return: number of printed chars
 */
int unprint(va_list ar)
{
	int count = 0, num = va_arg(ar, int), value;

	value = bintodec(num);
	count += numprint(value);
	return (count);

}
/**
 * dec2bin - convert an int representation to a binary one
 * @n: integer to convert
 * Return: an int array to hold the values
 */
int *dec2bin(int n)
{
	int *decarr, x = 1;
	size_t i, len = (sizeof(int) * 8);

	decarr = malloc((sizeof(int) * 8) * sizeof(int));
	if (decarr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		decarr[i] = ((n >> i) & x);
	return (decarr);
}
/**
 * bintodec - convert inary to equivalent integr
 * @decarr: to print ijn unsigned
 * Return: converted number
 */
int bintodec(int decarr)
{
	int *num = dec2bin(decarr), len = sizeof(int) * 8, i, mult = 0;
	int value;

	if (!(num))
		return (0);
	for (i = 0; i < len; i++)
	{
		value = num[i] * _pow(2, i);
		mult += value;
	}
	free(num);
	return (mult);
}
/**
 * _pow - raise a base to a partuular power
 * @base: base to be raised
 * @index: index to raise to
 * Return: exponent of the number raise to that power
 */
int _pow(int base, int index)
{
	int i, ret = 1;

	if (index == 0)
		return (1);
	if (index == 1)
		return (base);
	for (i = 0; i < index; i++)
		ret *= base;
	return (ret);
}
