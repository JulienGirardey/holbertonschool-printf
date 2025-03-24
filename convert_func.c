#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* print_char - function use to print a char
*
* @arg: Character to print
*
* Return: Always void
*/
void print_char(va_list *arg)
{
	_putchar(va_arg(*arg, int));
}

/**
* print_int - function use to print an integer
*
* @arg: integer to print
*
* Return: Always void
*/
void print_int(va_list *arg)
{
	int n = va_arg(*arg, int);

	int count = 0, i = 0;

	int digits[10];

	int num = n;

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
}

/**
 * print_unsigned - function use to print an unsigned integer
 *
 * @arg: unsigned integer to print
 *
 * Return: Always void
 */
void print_unsigned(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[10];

	unsigned int num = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 10;
			num = num / 10;
			i++;
		}
		while (i--)
		{
			_putchar(digits[i] + '0');
		}
	}
}

/**
* print_string - function use to print a string
*
* @arg: string to print
*
* Return: Always void
*/
void print_string(va_list *arg)
{
	char *s = va_arg(*arg, char *);

	if (s == NULL)
		s = "(nil)";
	while (*s)
	{
		_putchar(*s);
		s++;
	}
}
