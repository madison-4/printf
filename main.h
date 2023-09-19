#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>
#include<stdlib.h>
#include<unistd.h>

#define BUFSIZE 1024

int _printf(const char *format, ...);
int _putchar(char c);
int edge_cases(const char *format, va_list args);

/**
 * struict choose - a struct to hold function pointers and character choice
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
int printbin(va_list ar);
int dectobin(unsigned int num);
char *rot13(char *s);
int rotthirt(va_list ar);
int printhex(va_list arg);
int dec_hex(unsigned int h_num);

#endif  /* MAIN_H */
