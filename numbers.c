#include "main.h"
/**
 * print_number - prints an integer
 * @n: number to be printed
 * Return: no return
 */
int print_number(va_list n)
{
	int num = va_arg(n, int), count = 0;

	count += numprint(num);
	return (count);
}
/**
 * numprint - print a number using recursion
 * @arg: number to be printed
 * Return: number of digits printed
 */
int numprint(int arg)
{
	unsigned int k = arg;
	int count = 0;

	if (arg < 0)
	{
		_putchar('-');
		count++;
		arg *= -1;
		k = arg;
	}
	k /= 10;
	if (k)
		count += numprint(k);
	count += _putchar(((unsigned int) arg % 10) + 48);
	return (count);
}
