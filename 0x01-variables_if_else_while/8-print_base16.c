#include <stdio.h>
/**
 * main - main
 * Description: Prints all numbers of base 16
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'F'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
