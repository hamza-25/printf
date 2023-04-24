#include "main.h"
/**
 * _printf - print function
 * @format: given string
 * Return: always 0
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, j, ibuf = 0;
	va_list ptr;
	char *buffer;
	char *str;

	va_start(ptr, format);
	buffer = malloc(sizeof(char) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	while (format && format[i])
	{
	if (format[i] == '%')
	{
		if (format[i + 1] == '\0')
		{
			write(1, buffer, ibuf), free(buffer), va_end(ptr);
			return (-1);
		}
		else if (format[i + 1] == '%')
		{
			handle_buffer(buffer, format[i + 1], ibuf);
			i++;
		}
		else
		{
		switch (format[i + 1])
		{
			case 'c':
				handle_buffer(buffer, va_arg(ptr, int), ibuf);
				i++;
				break;
			case 's':
				j = 0;
				str = va_arg(ptr, char *);
				for (; str[j]; j++)
					handle_buffer(buffer, str[j], ibuf);
				i++;
				break;

		}
		}
	}
	else
	{
		handle_buffer(buffer, format[i], ibuf);
	} i++;
	}
	buffer[ibuf] = '\0';
	write(1, buffer, ibuf), va_end(ptr), free(buffer);
	return (ibuf);
}
