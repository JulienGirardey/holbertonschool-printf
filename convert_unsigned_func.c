#include "main.h"

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
* print_octal - function use to print an octal
*
* @arg: octal to print
*
* Return: Always void
*/
void print_octal(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[12];

	unsigned int num = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 8;
			num = num / 8;
			i++;
		}
		while (i--)
		{
			_putchar(digits[i] + '0');
		}
	}
}

/**
* print_lower_hexadecimal - function use to print a hexadecimal
*
* @arg: hexadecimal to print
*
* Return: Always void
*/
void print_lower_hexadecimal(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[9];

	unsigned int num = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 16;
			num = num / 16;
			i++;
		}
		while (i--)
		{
			if (digits[i] < 10)
				_putchar(digits[i] + '0');
			else
			{
				_putchar(digits[i] - 10 + 'a');
			}
		}
	}
}

/**
* print_upper_hexadecimal - function use to print a hexadecimal
*
* @arg: hexadecimal to print
*
* Return: Always void
*/
void print_upper_hexadecimal(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[9];

	unsigned int num = n;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 16;
			num = num / 16;
			i++;
		}
		while (i--)
		{
			if (digits[i] < 10)
				_putchar(digits[i] + '0');
			else
			{
				_putchar(digits[i] - 10 + 'A');
			}
		}
	}
}
