#include "main.h"

/**
 * print_numbers - prints the numbers 0 to 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	char i;
	for(i=0;i<10;i++)
	{
		_putchar("%c",i);
	}
	_putchar("\n");
	return (0);
}
