#include "main.h"
/**
 * print_rev - string, in revers, followed by a new line
 * @s: string
 * Return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
