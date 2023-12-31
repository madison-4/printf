#include "main.h"
/**
 * _puts - a function that prints a string
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
 * myputchar - a function to print chars
 * @arg: va_list variable argument
 * Return: number of chars(1)
 */
int myputchar(va_list arg)
{
	char c = (va_arg(arg, int));

	return (_putchar(c));
}
/**
 * rotthirt - a function to print a rot13 string
 * void arguments\
 * @var: va_list variable passed
 * Return: 1 on success
 */
int rotthirt(va_list var)
{
	char *str = va_arg(var, char *);
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, count = 0, j;

	if (!(str))
		str = "AHYY";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; alph[j]; j++)
		{
			if (str[i] == alph[j])
			{
				_putchar(rot[j]);
				count++;
				break;
			}
		}
		if (!(alph[j]))
		{
			_putchar(str[i]);
			count++;
		}
	}
	return (count);
}
