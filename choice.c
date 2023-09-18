#include "main.h"
/**
 * choice - function to choose the function pointer
 * @c: format specifier
 * Return: Result of the choice
 */
int (*choice(char c))(va_list a)
{
	choose great[] = {
		{'s', _puts},
		{NULL, NULL}
	};
	int iter = 0;

	while (great[iter].f)
	{
		if (c == great[iter].c)
			return (great[iter].f);
		iter++;
	}
	return (NULL);
}
