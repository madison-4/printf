#include "main.h"
/**
 * _puts - print a string
 * @str: string to be printed
 * Return: number of characters in the strings
 */
int _puts(va_list ar)
{
	int i, count = 0;
	char *str = va_arg(ar, char *);

	if (!(str))
		str = "(null)";
	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);
	return (count);
}
