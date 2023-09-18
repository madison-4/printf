#include "main.h"
#include<stdio.h>
/**
 * main - test the printf function
 * no arguments
 * Return: 0 on success
 */
int main(void)
{
	int len, len2;
	char str[] = "Let's see that you can print";

	len = printf("Let's try a simple sentence");
	len2 = _printf("Let's try a simple sentence");
	printf("\nYours returns %d while std returns %d\n", len2, len);
	len = printf("Let's try it with a string %s and see", str);
	len2 = _printf("Lets try it with a string %s and see", str);
	printf("\nYours returns %d while std return %d , see", len2, len);

	return (0);
}
