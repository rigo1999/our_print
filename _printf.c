#include "main.h"
/**
 * _printf - returns the number of characters
 * @format: A string containing format specifiers.
 * Return: The number of characters that would be printed.
 */
int _printf(const char *format, ...)
{
	int count_char = 0, i, str_count;

	va_list args;

	va_start(args, format);


	for (i = 0; format[i] != '\0'; i++)
	{
	if (format[i] != '%')
	{
	putchar(format[i]);
	}
	else if (format[i + 1] == 'c')
	{
		_putchar(va_arg(args, int));
		i++;
	} else if (format[i + 1] == 's')
	{
	str_count = put_f(va_arg(args, char*));
			i++;
			count_char += (str_count - 1);
	} else if (format[i + 1] == '%')
	{
	_putchar('%');
	}
		count_char += 1;
	}
	va_end(args);
	return (count_char);
}
