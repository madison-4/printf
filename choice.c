#include "main.h"
/**
 * choice - function that will choose the function pointer
 * @car: the format specifier
 * @ar: va_list variable
 * Return: Result of the choice
 */
int choice(va_list ar, char car)
{
	choose great[] = {{'c', myputchar}, {'s', _puts},
			  {'d', print_number}, {'i', print_number},
			  {'b', printbin}, {'R', rotthirt}};
	int iter = 0;
	int count = 0;
	int (*func)(va_list a);

	for (iter = 0; iter < 6; iter++)
	{
		if (car == great[iter].c)
		{
			func = great[iter].f;
			count += func(ar);
			return (count);
		}
	}
	return (-7);
}
