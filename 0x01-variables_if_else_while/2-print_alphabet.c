#include <stdio.h>

/**
 * main - Print all alphabets in lowercase
 *
 * Return: Always 0(success)
 *
 */

int main(void)

{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int l;

	for (l = 0; l < 26; l++)
	{
		putchar(alp[l]);
	}

	putchar('\n');
	return (0);
}
