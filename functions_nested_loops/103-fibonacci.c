#include <stdio.h>

/**
 * main - Prints the sum of even Fibonacci numbers up to 4000000
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long first;
unsigned long second;
unsigned long next;
unsigned long sum;

first = 1;
second = 2;
sum = 0;
while (first <= 4000000)
{
if (first % 2 == 0)
sum += first;
next = first + second;
first = second;
second = next;
}
printf("%lu\n", sum);
return (0);
}
