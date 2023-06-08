#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	/* Check if the number is negative */
	if (n < 0)
		return (-1); /* Return -1 to indicate an error */

	/* Call the actual recursive function with initial iterator value of 0 */
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	/* Check if the square of the iterator is greater than the number */
	if (i * i > n)
		return (-1); /* Return -1 to indicate an error */

	/* Check if the square of the iterator is equal to the number */
	if (i * i == n)
		return (i); /* Return the iterator value as the square root */

	/* Make a recursive call with the next iterator value (i + 1) */
	return (actual_sqrt_recursion(n, i + 1));
}
