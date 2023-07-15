#include <stdio.h>
/**
 * main - main
 * Description: Print all single digit numberZ of base 10 ("with conditions")
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + 48);
		i++;
	}

	putchar('\n');
	return (0);
}
