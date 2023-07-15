#include <stdio.h>
/**
 * main - main
 * Description: Print all possible two-digit combinations
 * Return: 0
 */
int main(void)
{
	int x;
	int y = 0;

	while (y < 10)
	{
		x = 0;
		while (x < 10)
		{
			if (y != x && y < x)
			{
				putchar(48 + y);
				putchar(48 + x);

				if (x + y != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
