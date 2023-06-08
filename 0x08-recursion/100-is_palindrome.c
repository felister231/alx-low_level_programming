#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1); /* An empty string is considered a palindrome */

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0); /* Base case: end of the string is reached */

	return (1 + _strlen_recursion(s + 1)); /* Recursively increment the length */
}

/**
 * check_pal - checks the characters recursively for a palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if the string is a palindrome, 0 if it's not
 */
int check_pal(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0); /* Characters at the current positions are not equal */

	if (i >= len)
		return (1); /* All characters have been checked and are equal */

	return (check_pal(s, i + 1, len - 1)); /* Recursively check next characters */
}
