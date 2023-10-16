<<<<<<< HEAD
#include "main.h"
int _putchar(char c)
{return (write(1, &c, 1));}

int _strlen(char *str)
{int count = 0;
while (*str != '\0')
{count +=1; str++;}
return count;}

int _constlen(const char *con)
{int len = 0;
while(*con != '\0')
{len+=1; con++;} return len;}

/**
 *_printf-a function that produces output according to a format
 *@format:input by user
 *Return:number of characters printed
 **/
int _printf(const char *format, ...)
{
	va_list arg;
	int i;
	char c;
	char *str;

	if (format == NULL)
	{
		return(-1);
	}
	else
	{va_start(arg, format);
		
		for (i = 0; i < _constlen(format); i++)
		{
			if (format[i] == '%')
			{
				switch (format[i + 1])
				{
					case 'c':
					c = va_arg(arg, int);
					write(1, &c, 1);
					break;
					case 's':
					str = va_arg(arg, char*);
					write(1, str, _strlen(str));
					
					break;
					case '%':
					c = '%';
					write(1, &c, 1);
					
					default:
					break;
				}
			}
			if ((format[i] != '%') && (format[i] != '\0'))
			{
				if(i != 0 && format[i-1] == '%')
				{continue;}
				_putchar(format[i]);
			}
		}
	}
	va_end(arg);
	return (0);
=======
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...) {
    char c;
    char *str;
    va_list arg;
    unsigned int i;
    char *errormsg = "error";
    va_start(arg, format);

    if (format == NULL) {
        write(1, errormsg, strlen(errormsg));
    } else {
        for (i = 0; i < strlen(format); i++) {
            if (format[i] == '%') {
                switch (format[i + 1]) {
                    case 's':
                        str = va_arg(arg, char*);
                        write(1, str, strlen(str));
                        break;
                    case 'c':
                        c = va_arg(arg, int);
                        write(1, &c, 1);
                        break;
                    case 'i':
                        str = va_arg(arg, char*);
                        write(1, str, strlen(str));
                        break;
                    case '%':
                        c = '%';
                        write(1, &c, 1);
                        break;
                    case 'd':
                        str = va_arg(arg, char*);
                        write(1, str, strlen(str));
                        break;
                    default:
                        break;
                }
                i++; // Skip the next character after the format specifier
            } else {
                putchar(format[i]);
            }
        }
    }

    va_end(arg);
    return 0;
}

int main() {
    _printf("String:[%s] character [%c]\n", "I am a string !", 'h');
    return 0;
>>>>>>> 8d0afe56e760c5303b2430c316156c0ea770a74d
}
