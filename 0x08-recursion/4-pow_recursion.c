#include "main.h"

/**
 * _pow_recursion - returns power
 * @x: base
 * @y: exposant
 * Return: x or 1 or -1
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));

}
