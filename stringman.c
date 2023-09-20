#include "main.h"
/**
 * revprint - print a string in reverse
 * @arg: passed va_list variable
 * Return: number of printed chars
 */
int revprint(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (!str)
		str = "(null)";
	return ((print_rev(str)));
}
/**
 * _strlen - get string length
 * @str: string
 * Return: length os string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
 * print_rev - print a string in reverse
 * @s: string
 * Return: number of printed chars
 */
int print_rev(char *s)
{
	int len = _strlen(s), count = 0;

	len--;
	while ((len) >= 0)
	{
		_putchar(s[len]);
		count++;
		len--;
	}
	_putchar('\n');
	return (count);
}
