#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints a buffer in hexadecimal and printable ASCII.
 * @b: Buffer to print.
 * @size: Number of bytes to print.
 */
void print_buffer(char *b, int size)
{
int offset = 0;
int count;
int i;
unsigned int byte;

if (size <= 0)
putchar('\n');
while (offset < size)
{
count = size - offset;
if (count > 10)
count = 10;
printf("%08x: ", (unsigned int)offset);
for (i = 0; i < 10; i++)
{
if (i < count)
{
byte = (unsigned char)b[offset + i];
printf("%02x", byte);
}
else
{
fputs("  ", stdout);
}
if (i % 2 == 1)
putchar(' ');
}
for (i = 0; i < count; i++)
{
byte = (unsigned char)b[offset + i];
putchar(byte >= ' ' && byte <= '~' ? (int)byte : '.');
}
putchar('\n');
offset += count;
}
}
