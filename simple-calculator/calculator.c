#include <stdio.h>

/**
 * main - Display the calculator menu and read the user's choice.
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;

	puts("Simple Calculator");
	puts("1) Add");
	puts("2) Subtract");
	puts("3) Multiply");
	puts("4) Divide");
	puts("0) Quit");

	while (1)
	{
		printf("Choice: ");
		if (scanf("%d", &choice) != 1)
			return (0);

		if (choice == 0)
		{
			puts("Bye!");
			return (0);
		}
	}
}
