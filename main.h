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
int format_int(int input, int num_base);
int print_str(char *str);

#endif
