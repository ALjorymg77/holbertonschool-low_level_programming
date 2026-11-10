#include "main.h"

/**
 * print_chessboard - Prints all eight rows of a chessboard.
 * @a: Pointer to the first row of the board.
 */
void print_chessboard(char (*a)[8])
{
int row;
int col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
_putchar(a[row][col]);
_putchar('\n');
}
}
