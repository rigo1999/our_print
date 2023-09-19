#include "main.h"

/**
 * format_case - selects the appropriate specifiers
 * @args: number of arguements
 * @count_char: the printed characters
 * @format: the format specifier
 * Return: printed charcaters
 */

int format_case(const char *format, va_list args, int count_char)
{
	switch (*format)
	{
		case 'd':
		case 'i':
			count_char = printf_integer(args, count_char);
			break;
		case 'c':
			_putchar(va_arg(args, int));
			count_char++;
			break;
		case 's':
			count_char = printf_string(args, count_char);
			break;
		case '%':
			_putchar('%');
			count_char++;
			break;
		case 'b':
			count_char = printf_binary(va_arg(args, unsigned int), count_char);
			break;
		case 'x':
		case 'X':
			count_char = _x(va_arg(args, unsigned int), count_char, (*format == 'X') ? 1 : 0);
			break;
		case 'o':
			count_char = printf_octal(va_arg(args, unsigned int), count_char);
			break;
		case 'u':
			count_char = printf_unsigned(va_arg(args, unsigned int), count_char);
			break;
		case 'r':
			count_char = printf_reverse(args, count_char);
			break;
		case 'p':
			count_char = printf_pointer(args, count_char);
			break;
		default:
			break;
	}
	return (count_char);
}
