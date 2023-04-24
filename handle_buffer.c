#include "main.h"

/**
 * handl_buf - concatenates the buffer characters
 * @buffer: buffer pointer
 * @c: charcter to concatenate
 * @ibuf: index of buffer pointer
 * Return: index of buffer pointer.
 */
unsigned int handl_buf(char *buffer, char c, unsigned int ibuf)
{
	buffer[ibuf] = c;
	ibuf++;
	return (ibuf);
}
