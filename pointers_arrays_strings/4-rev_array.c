#include "main.h"

/**
 * reverse_array - Reverses an array of integers in place.
 * @a: Array to reverse.
 * @n: Number of elements in the array.
 */
void reverse_array(int *a, int n)
{
int left;
int right;
int temp;

left = 0;
while (left < n / 2)
{
right = n - 1 - left;
temp = a[left];
a[left] = a[right];
a[right] = temp;
left++;
}
}
