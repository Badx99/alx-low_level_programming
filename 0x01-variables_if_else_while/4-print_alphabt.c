#include <stdio.h>
/**
 * main - main
 * Description: Print the alphabet in lowercase except the letters "q" and "e"
 * Return: 0
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}

	putchar('\n');
	return (0);
}
