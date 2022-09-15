#include "main.h"

/**
 * print_diagonal - draws a daigonal line on the terminal
 * @n: height of line to be drawn
 * Return: none
 */

void print_diagonal(int n)
{
	int l = 0, c;

	while (l < n && n > 0)
	{
		c = 0;
		while (c < l)
		{
			_putchar(' ');
			c++;
		}
		_putchar('\\');
		_putchar('\n');
		l++;
	}
	if (l == 0)
		_putchar('\n');
}
