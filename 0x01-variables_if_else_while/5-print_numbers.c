#include <stdio.h>
/**
 * main - main
 * Description: Print all single digit numbers of base 10
 * Return: 0
 */
int main(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
