#include <stdio.h>
#include "main.h"
/**
 * main - checks the code
 * Return: 0
 */
int main(void)
{
	int c = 42;

	int count = _printf("Hello, %s! The answer is %d%%.\n", "World", c);

	printf("\nTotal character printed id %d\n", count);
	return (0);
}
