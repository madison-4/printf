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
 * struct choose - a struct to hold function pointers and character choice
 * @f: the function pointer
 * @c: character to choose with
 */
typedef struct choose
{
	char c;
	int (*f)(va_list);
} choose;
int _puts(va_list str);
int choice(va_list ar, char c);
int myputchar(va_list ar);
int perce(void);
int print_number(va_list arg);
int numprint(int arg);

#endif  /* MAIN_H */
