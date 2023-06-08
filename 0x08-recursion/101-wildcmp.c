#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 *
 * Return: 0
 */
int wildcmp(char *s1, char *s2)
{
	/* Check if s1 has reached the end */
	if (*s1 == '\0')
	{
		/* Check if s2 is not empty and starts with '*' */
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1)); /* Recurse with s1 & s2 shift to the right */
		}
		return (*s2 == '\0'); /* Return 1 if both strings have reached the end */
	}

	/* Check if s2 starts with '*' */
	if (*s2 == '*')
	{
		/* Recurse by skipping one character in s1 or shifting s2 to the right */
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	/* Check if the current characters in s1 and s2 are equal */
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1)); /* Recurse with s1 & s2 shifts to right */
	}
	return (0); /* The characters are not equal, return 0 */
}
