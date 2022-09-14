#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number we are looking for it last digits
 * Return: 0
 */

int print_last_digit(int n)
{
	int nv = n < 0 ? (n % 10) * -1 : n % 10;

	_putchar(nv + '0');
	return (nv);
}
