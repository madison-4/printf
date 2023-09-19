#include "main.h"
/**
 * dec_hex - prints adecimal nunber in binary
 * @h_num: number to print
 * Return: Number of characters printed
 */
int dec_hex(unsigned int h_num)
{
        unsigned int rem, quot;
        int count = 0;

        if (!(h_num))
                return (_putchar('0'));
        quot = h_num / 16;
        rem = h_num % 16;
        if (quot)
		count += dec_hex(quot);
	if (rem < 10)
		count += _putchar(rem + '0');
	else
		count += _putchar(rem - 10 + 'A');
        return (count);
}
/**
 * printhex - print a number in binary
 * @arg: va_list variable passed
 * Return: count of hexadecima digits
 */
int printhex(va_list arg)
{
        int h_num = va_arg(arg, unsigned int), count = 0;

	count += dec_hex(h_num);

	return (count);

}
