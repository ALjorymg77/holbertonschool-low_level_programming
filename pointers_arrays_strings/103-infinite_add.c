#include "main.h"

/**
 * infinite_add - Adds two nonnegative integers written as strings.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer for the result.
 * @size_r: Size of the result buffer.
 *
 * Return: The result buffer, or 0 if the result does not fit.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
char *end1;
char *end2;
int carry = 0;
int pos;
int i;

if (size_r < 2)
return (0);
while (n1[0] == '0' && n1[1] != '\0')
n1++;
while (n2[0] == '0' && n2[1] != '\0')
n2++;
for (end1 = n1; *end1 != '\0'; end1++)
;
for (end2 = n2; *end2 != '\0'; end2++)
;
pos = size_r - 1;
r[pos] = '\0';
while (end1 != n1 || end2 != n2 || carry != 0)
{
if (pos == 0)
return (0);
if (end1 != n1)
carry += *--end1 - '0';
if (end2 != n2)
carry += *--end2 - '0';
r[--pos] = carry % 10 + '0';
carry /= 10;
}
for (i = 0; pos + i < size_r; i++)
r[i] = r[pos + i];
return (r);
}
