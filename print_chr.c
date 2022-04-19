#include "main.h"
#include <stdio.h>
/**
 * print_c - A function that prints a char
 * @c: character to print
 * Return: Always 1 (Success)
 */

int print_c(va_list arguments, char *buf, unsigned int ibuf)
{
	char c;

	c = va_arg(arguments, int);
	handl_buf(buf, c, ibuf);

	return (1);
}
