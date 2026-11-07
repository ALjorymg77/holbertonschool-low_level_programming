#include <stdio.h>

/**
 * main - Display the calculator menu and validate choices.
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;

	puts("Simple Calculator");

	while (1)
	{
		puts("1) Add");
		puts("2) Subtract");
		puts("3) Multiply");
		puts("4) Divide");
		puts("0) Quit");

		printf("Choice: ");
		if (scanf("%d", &choice) != 1)
			return (0);

		if (choice == 0)
		{
			puts("Bye!");
			return (0);
		}

		if (choice == 1)
{
	double a, b;

	printf("A: ");
	if (scanf("%lf", &a) != 1)
		return (0);

	printf("B: ");
	if (scanf("%lf", &b) != 1)
		return (0);

	printf("Result: %g\n", a + b);
}
else if (choice < 1 || choice > 4)
	puts("Invalid choice");
	}
}
