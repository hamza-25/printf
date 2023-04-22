#include <stdio.h>
#include "main.h" 
/**
 * _printf - print function
 * @format: given string
 * Return: always 0
*/
int _printf(const char *format, ...)
{
	int i = 0;
	va_list ptr;

	va_start(ptr, format);
	while (format && format[i])
	{
	if (format[i] == '%' && (format[i + 1] == 'c' || format[i + 1] == 's'))
	{
		switch (format[i + 1])
		{
			case 'c':
				printf("%c\n", va_arg(ptr, char *));
				break;
			case 's':
				printf("%s\n", va_arg(ptr, char *));
				break;
		}
	}
	else
	{
	printf("%c", format[i]);
	}
	i++;
}
