#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int remaining;
	int character;

	remaining = 2772;
	srand((unsigned int) time(NULL));
	while (remaining > 126)
	{
		character = 33 + rand() % 61;
		putchar(character);
		remaining -= character;
	}
	putchar(remaining);
	return (0);
}
