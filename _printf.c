#include "main.h"

/**
 * _printf - implementation of the inbuilt printf
 * @format: the format specifier
 * Return: the formated string
 */

int _printf(const char *format, ...)
{
	int count_char = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			count_char = format_case(format, args, count_char);
			format++;
		}
		else
		{
			_putchar(*format);
			count_char++;
			format++;
		}
	}
	va_end(args);
	return (count_char);
}
