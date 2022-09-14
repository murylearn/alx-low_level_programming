#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: on sucess 1.
 * On error, -1
 */

int _putchar(c)
	return (write(1, &c, 1));

