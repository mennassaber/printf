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
}
