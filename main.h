#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
/**
 * choose - strcu to hold function pointers and character choice
 * @f: function pointer
 * @c: character to choose with
 */
typedef struct choose{
	char c;
	int (*f)(va_list);
} choose;
int _puts(va_list str);

#endif  /* MAIN_H */
