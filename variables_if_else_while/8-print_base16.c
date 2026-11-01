#include <stdio.h>

/**
 * main - Prints hexadecimal digits in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char symbol;

for (symbol = '0'; symbol <= '9'; symbol++)
putchar(symbol);
for (symbol = 'a'; symbol <= 'f'; symbol++)
putchar(symbol);
putchar('\n');
return (0);
}
