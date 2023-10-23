#include "main.h"
#include<stdio.h>

/**
 * dec2bin - convert an int representation to a binary one
 * @n: integer to convert
 * Return: an int array to hold the values
 */
int *dec2bin(int n)
{
	int *decarr, x = 1, temp, j;
	size_t i, len = (sizeof(int) * 8);

	decarr = malloc((sizeof(int) * 8) * sizeof(int));
	if (decarr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		decarr[i] = ((n >> i) & x);
	for (i = 0, j = (len - 1); i < (len / 2); i++, j--)
	{
		temp = decarr[j];
		decarr[j] = decarr[i];
		decarr[i] = temp;
	}
	return (decarr);
}
/**
 * main - test dectobin
 * no arguments
 * Return: 0 on success
 */
int main(void)
{

	int x = 1, *arr;
	size_t i;
	
	arr = dec2bin(x);
	if (arr == NULL)
		exit(EXIT_FAILURE);
	for (i = 0; i < (sizeof(int) * 8); i++)
		printf("%d", arr[i]);
	putchar(10);
	free(arr);
	return (0);
}
