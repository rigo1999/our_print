#include "main.h"

/**
 * put_f - print our string
 *
 * @c: string
 * Return: number of bytes
 */

int put_f(char *c)
{
	int count_char = 0;

	if(c)
	{
	for (count_char =0; c[count_char]!='\0'; count_char++)
	{
	_putchar(c[count_char]);
	}
	}
	return (count_char);
}
