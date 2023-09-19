#include "main.h"
/**
 * print_number - a function that prints an integer
 * @n: the number to be printed
 * Return: no return
 */
int print_number(va_list n)
{
	int num = va_arg(n, int), count = 0;

	count += numprint(num);
	return (count);
}
/**
 * numprint - a function that prints a number using recursion
 * @arg: the number to be printed
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
/**
 * dectobin - prints adecimal nunber in binary
 * @num: number to print
 * Return: Number of characters printed
 */
int dectobin(unsigned int num)
{
	unsigned int remainder, quotient;
	int count = 0;

	if (!(num))
		return (_putchar(48));
	quotient = num / 2;
	remainder = num % 2;
	if (quotient)
		count += dectobin(quotient);
	count += _putchar((remainder) + 48);
	return (count);
}
/**
 * printbin - print a number in binary
 * @arg: va_list variable passed
 * Return: count of binary digits
 */
int printbin(va_list arg)
{
	int num = va_arg(arg, unsigned int), count = 0;

	count += dectobin(num);
	return (count);
}
