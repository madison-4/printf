#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: no return
 */
int print_number(va_list n)
{
	int num = va_arg(n, int), count = 0;
	unsigned int k = num;

	if (k < 0)
	{
		_putchar('-');
		n *= -1;
		k = n;
	}
	k /= 10;
	if (k)
		print_number(k);
	_putchar(((unsigned int) n % 10) + 48);
}
