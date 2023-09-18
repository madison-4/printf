#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int edge_cases(const char *format, va_list args);

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
int choice(va_list ar, char c);
int myputchar(va_list ar);
int perce(void);

#endif  /* MAIN_H */
