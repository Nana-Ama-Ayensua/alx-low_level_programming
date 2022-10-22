#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n:define the length of line
 * Return:0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
