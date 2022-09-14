#include "main.h"

/**
 * print_times_table - prints the n times table, starting at 0
 * @n: n times table to print
 * Return: 0
 */

void print_times_table(int n)
{
	int a = 0;

        int b;

        int rep;

	if ( n > 15) 
	{
		_putchar('\n');
		return (0);

        while (a <= n)
        {
                b = 0;
                while (b <= n)
                {
                        rep = a * b;
                        if (b == 0)
                        {
                                _putchar('0' + rep);
                        }
                        else if (rep < 10)
                        {
                                _putchar(' ');
                                _putchar('0' + rep);
                        }
                        else
                        {
                                _putchar('0' + rep / 10);
                                _putchar('0' + rep % 10);
                        }

                        if (b < 9)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                        b++;
                }
                _putchar('\n');
                a++;
        }

}
