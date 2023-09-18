#include "main.h"
/**
 * choice - function to choose the function pointer
 * @c: format specifier
 * @ar: va_list variable
 * Return: Result of the choice
 */
int choice(va_list ar, char c)
{
	choose great[] = {
		{'c', myputchar},
		{'s', _puts},
	};
	unsigned long int iter = 0;
	int count = 0;
	int (*func)(va_list a);

	for (iter = 0; iter < 2; iter++)
	{
		if (c == great[iter].c)
		{
			func = great[iter].f;
			count = func(ar);
		}
		iter++;
	}
	return (count);
}
