#include "main.h"

/**
 * main -check the code
 *
 * Return Always 0.
 *print alphabet
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
