#include "main.h"

/**
 * handle_buffer - concatenates the buffer characters
 * @buffer: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer
*/
unsigned int handle_buffer(char *buff, char c, unsigned int ibuf)
{
	buff[ibuf] = c;
	ibuf++;
	return (ibuf);
}
