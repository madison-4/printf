#include "main.h"
/**
 * dec2bin - convert an int representation to a binary one
 * @n: integer to convert
 * Return: an int array to hold the values
 */
int *dec2bin(int n)
{
	int *decarr;
	long unsigned  int i;

	decarr = malloc((sizeof(int) * 8));
	if (decarr == NULL)
		return (NULL);
	for (i = 0; i < (sizeof(int) * 8); i++)
		decarr[i] = (n << 1);
	return (decarr);
}
/**
 * main - test dectobin
 * no arguments
 * Return: 0 on success
 */
int main(void)
{

	int x = 1024, *arr;
	size_t i;
	arr = dec2bin(x);
	for (i = 0; i <(sizeof(int) * 8); i++)
		putchar(arr[i] + 48);
	free(arr);
	return (0);
}