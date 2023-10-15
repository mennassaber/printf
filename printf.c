#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
int _printf(const char *format, ...)
{
char c;
char *str;
va_list arg;
unsigned int i;
char *errormsg = "error";
va_start(arg, format);

if (*format == '\0')
{
	return (-1);
	write(1, errormsg, 5);
}
else
{for(i = 0; i < strlen(format); i++)
{if((format[i] != '%') && (format[i] != '\0'))
{
putchar(format[i]);}
}
if(format[i] == '%')
{
switch(format[i + 1]){
case 's':
str=va_arg(arg, char*);
write(1, str, strlen(str));
break;
case 'c':
c=va_arg(arg, int);
write(1, &c, 1);
break;
case '%':
c = '%';
write(1, &c, 1);
break;
default:
break;
}
}
}
return (0);
}
