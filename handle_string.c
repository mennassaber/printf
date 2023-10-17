/**
 * *print_str-format inputted string
 * *@str:inputted string
 * *Return:count of printed numbers
 * **/
int print_str(char *str)
{
	int i;
	int count = 0;

	for (i = 0; i <= _strlen(str); i++)
	{
	_putchar(str[i]);
	count++;
	}
	return (count);
}
