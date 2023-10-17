#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _strlen(char *s);
int _constlen(const char *con);
int handle_holder(char h, va_list arg);
int format_int(int num, int num_base);
int print_str(char *str);
/**
 * struct specifier- handles specifier in string
 * @holder:place holder for replacement
 * @f:pointer to replacement function
 **/
typedef struct specifier
{
	char *holder;
	void (*f)(char *, va_list);
}
holder_specifier;

#endif
