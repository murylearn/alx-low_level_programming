#include "main.h"

/**
 * print_line - draws a straight line to the terminal
 * @n: length of line
 * Return: none
 */

void print_line(int n)
{
	int l = 0;

	while (l < n && n > 0)
	{
		_putchar('_');
		l++;
	}
	_putchar('\n');
}
