#include "main.h"
/**
 * _puts - print a string
 * @ar: va_list variable to be printed
 * Return: number of characters in the strings
 */
int _puts(va_list ar)
{
	int i, count = 0;
	char *str = va_arg(ar, char *);

	if (!(str))
		str = "(null)";
	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
/**
 * myputchar - to print cars
 * @arg: va_list variable argument
 * Return: number of chars(1)
 */
int myputchar(va_list arg)
{
	char c = (va_arg(arg, int));
	int i = 0;

	_putchar(c);
	i++;
	return (i);
}
