#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* display_function - function to display the correct function
*
* @format: format to print
* @args: arguments to print
* @f: function to print
*
* Return: number of characters printed
*/
int display_function(const char *format, va_list *args, f_t f[])
{
	int i = 0, j, count = 0, printed;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (f[j].type)
			{
				if (format[i + 1] == f[j].type[0])
				{
					printed = f[j].print(args);
					count += printed;
					break;
				}
				j++;
			}
			if (format[i] == '%' && format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == '%')
			{
				_putchar('%');
				count++;
			}
			else if (f[j].type == NULL)
			{
				_putchar('%');
				count++;
				i--;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	return (count);
}

/**
* _printf - prints anything
*
* @format: list of argument types passed to the function
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int count;

	f_t f[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_lower_hexadecimal},
		{"X", print_upper_hexadecimal},
		{NULL, NULL}};

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	count = display_function(format, &args, f);
	va_end(args);
	return (count);
}
