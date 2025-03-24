#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* _printf - prints anything
* @format: list of argument types passed to the function
*
* Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j, count = 0;

	f_t f[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int},
		{"u", print_unsigned},
		{NULL, NULL}};

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (f[j].type)
			{
				if (format[i + 1] == f[j].type[0])
				{
					f[j].print(&args);
					break;
				}
				count++;
				j++;
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
	va_end(args);
	return (count);
}
