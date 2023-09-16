#include "main.h"
/**
 * _puts - print a string
 * @str: string to be printed
 * Return: number of characters in the strings
 */
int _puts(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
		count += _putchar(str[i]);
	return (count);
}
