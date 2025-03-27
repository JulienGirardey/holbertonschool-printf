# Project Printf Holberton School

A custom implementation of the printf function in C that handles various format specifiers.

This project implements a simplified version of the `printf` function from the C standard library. It supports the following format specifiers:

- `%c`: Print a single character
- `%s`: Print a string
- `%d` or `%i`: Print a decimal (integer) number
- `%u`: Print an unsigned decimal number
- `%o`: Print a number in octal format
- `%x`: Print a number in lowercase hexadecimal
- `%X`: Print a number in uppercase hexadecimal

## Compilation

if you modify a file, you need to compile before running:

```
    gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf
```

## Requirements

To compile this project and can use my printf function you need to have `GCC`.

To clone my repo you need to have `git`.

All your files can be compiled on Ubuntu and IOS.

## Flowchart

This is a diagram to explain the logic:

![image](https://github.com/user-attachments/assets/2a81812e-d64d-4000-81d9-a4edfd303253)

## How use this function

This is an example of usage of function printf:

```c
int main(void)
{
    _printf("%d", 89);
    _printf("Hello world!");
    _printf("%s", "This is a string");
}
```

This is my test file:

```c
int main(void)
{
	int len;

	int len2;

	unsigned int ui;

	void *addr;

	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	ui = (unsigned int)INT_MAX + 1024;

	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
	len = _printf("%");
	len2 = printf("%");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length true :[%d, %i]\n", len2, len2);
    _printf("%!\n");
    printf("%!\n");
	return (0);
}
```

## Man _printf

![Man](/holbertonschool-printf/Images/Man.png)

## Running Tests

This is an example of test:

```
ubuntu:~/holbertonschool-printf# ./printf 
-2147482625
-2147482625
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
ubuntu:~/holbertonschool-printf#
```

You can modify my test in `main.c`

## Authors

- [@JulienGirardey](https://github.com/JulienGirardey)
