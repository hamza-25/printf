#ifndef MAIN_H
#define MAIN_H
/**
 * tostring - integer to string
 * description: convert str to int
 * @str: buffer
 * @num: int to convert
 * @ibuf: remember ibuf
 * Return: num of bytes printes ibuf
*/
int tostring(char *str, int num, int ibuf)
{
	int i, rem, len = 0, n, dec;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	dec = len - 1;
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[ibuf + dec] = rem + '0';
		dec--;
	}
	ibuf += len;
	return (ibuf);
}

#endif
