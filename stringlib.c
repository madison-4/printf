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
 * rot13 - encode a string by moving its chars by 13 chars.
 * @s: string to be encoded
 * Return: encided string
 */
char *rot13(char *s)
{
	int i = 0, arriter;
	char alph[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = malloc(_strlen(s) + 1);

	if (!str)
		return (NULL);
	while (s[i])
	{
		for (arriter = 0; arriter < 52; arriter++)
		{
			if (s[i] == alph[arriter])
			{
				str[i] = rot[arriter];
				break;
			}
		}
		i++;
	}
	return (str);
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
	char *rotate = rot13(str);
	int i, count = 0;

	if (!(rotate))
		rotate = "(null)";
	for (i = 0; rotate[i]; i++)
	{
		_putchar(rotate[i]);
		count++;
	}
	free (rotate);
	return (count);
}
