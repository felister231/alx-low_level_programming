#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n:number to evaluate
 *
 * Return:1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	/* Check if the number is less than or equal to 1 */
	if (n <= 1)
		return (0); /* Return 0 as it is not a prime number */

	/* Call the actual recursive function and n-1 as the iterator */
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int actual_prime(int n, int i)
{
	/* Base case: if the iterator is 1, return 1 as the number is prime */
	if (i == 1)
		return (1);

	/* Check if the number is divisible by the current iterator value */
	if (n % i == 0 && i > 0)
		return (0); /* Return 0 as the number is not prime */

	/* Make a recursive call with the next iterator value (i - 1) */
	return (actual_prime(n, i - 1));
}
