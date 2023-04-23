#include <stdio.h>
#include <unistd.h>
#include "main.h" 
/**
 * _printf - print function
 * @format: given string
 * Return: always 0
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, ibuf = 0;
	va_list ptr;
	char *buffer;

	va_start(ptr, format);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (1);
	while (format && format[i])
	{
	if (format[i] == '%' && (format[i + 1] == 'c' || format[i + 1] == 's'))
	{
		switch (format[i + 1])
		{
			case 'c':
				write(1, buffer, ibuf);
				free(buffer);
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
	va_end(ptr);
}
