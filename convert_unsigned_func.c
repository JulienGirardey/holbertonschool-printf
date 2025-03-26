#include "main.h"

/**
* print_unsigned - function use to print an unsigned integer
*
* @arg: unsigned integer to print
*
* Return: Number of characters printed
*/
int print_unsigned(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[10];

	unsigned int num = n;

	int count = 0;

	if (n == 0)
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
			count++;
			i++;
		}
		while (i--)
		{
			_putchar(digits[i] + '0');
		}
	}
	return (count);
}

/**
* print_octal - function use to print an octal
*
* @arg: octal to print
*
* Return: Number of characters printed
*/
int print_octal(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[12];

	unsigned int num = n;

	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 8;
			num = num / 8;
			count++;
			i++;
		}
		while (i--)
		{
			_putchar(digits[i] + '0');
		}
	}
	return (count);
}

/**
* print_lower_hexadecimal - function use to print a hexadecimal
*
* @arg: hexadecimal to print
*
* Return: Number of characters printed
*/
int print_lower_hexadecimal(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[9];

	unsigned int num = n;

	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 16;
			num = num / 16;
			count++;
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
	return (count);
}

/**
* print_upper_hexadecimal - function use to print a hexadecimal
*
* @arg: hexadecimal to print
*
* Return: Number of characters printed
*/
int print_upper_hexadecimal(va_list *arg)
{
	unsigned int n = va_arg(*arg, unsigned int);

	unsigned int i = 0;

	unsigned int digits[9];

	unsigned int num = n;

	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (num != 0)
		{
			digits[i] = num % 16;
			num = num / 16;
			count++;
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
	return (count);
}
