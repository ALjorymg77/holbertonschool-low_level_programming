#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long first;
unsigned long second;
unsigned long next;
int count;

first = 1;
second = 2;
for (count = 0; count < 50; count++)
{
printf("%lu", first);
if (count < 49)
printf(", ");
next = first + second;
first = second;
second = next;
}
printf("\n");
return (0);
}
