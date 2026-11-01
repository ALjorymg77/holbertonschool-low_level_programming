#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long first_high = 0, first_low = 1;
unsigned long second_high = 0, second_low = 2;
unsigned long next_high, next_low;
const unsigned long base = 1000000000UL;
int count;

for (count = 0; count < 98; count++)
{
if (first_high == 0)
printf("%lu", first_low);
else
printf("%lu%09lu", first_high, first_low);
if (count < 97)
printf(", ");
next_low = first_low + second_low;
next_high = first_high + second_high + next_low / base;
next_low %= base;
first_high = second_high;
first_low = second_low;
second_high = next_high;
second_low = next_low;
}
printf("\n");
return (0);
}
