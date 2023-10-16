#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
_printf("String:[%s] character [%c]\n", "I am a string !", 'h');
_printf("Let's try to printf a simple sentence.\n");
_printf("Character:[%c]\n", 'S');
_printf("Character:[%c] in side a sentence\n", 'H');
_printf("Cast:[%c] in side a sentence\n", 899);
_printf("String:[%s]\n", "I am a string !");
_printf("String:[%s] nothing jon snow\n", "I am a string !");
_printf("String:[%s] nothing then character [%c]\n", "I am a string !",'f');
_printf("should print single [%%]\n");
_printf("%schar%c char:%c %sone:%% word:%s\n","hi",';','-',"Ht","yt\n");

_printf("%i\n",3);
return (0);
}

