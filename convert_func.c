#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <limits.h>

/**
* print_char - function use to print a char
*
* @arg: Character to print
*
* Return: Number of characters printed
*/
int print_char(va_list *arg)
{
	_putchar(va_arg(*arg, int));
	return (1);
}

/**
* print_int - function use to print an integer
*
* @arg: integer to print
*
* Return: Number of characters printed
*/
int print_int(va_list *arg)
{
	int n = va_arg(*arg, int);

	int count = 0, i = 0;

	int digits[10];

	long int num = n;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 10;
			num = num / 10;
			i++;
			count++;
		}
		i--;
		while (i >= 0)
		{
			_putchar(digits[i] + '0');
			i--;
		}
	}
	return (count);
}

/**
* print_string - function use to print a string
*
* @arg: string to print
*
* Return: Number of characters printed
*/
int print_string(va_list *arg)
{
	char *s = va_arg(*arg, char *);

	int count = 0;

	if (s == NULL)
		s = "(null)";
	while (*s)
	{
		_putchar(*s);
		count++;
		s++;
	}
	return (count);
}
