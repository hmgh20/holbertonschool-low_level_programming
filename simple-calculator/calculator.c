#include <stdio.h>

/**
 * main - Entry point for the simple calculator program
 *
 * Return: Always 0.
 */
int main(void)
{
	int choice;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit");
	printf("Choice: ");
	if (scanf("%d", &choice) == 1)
	{
		if (choice == 0)
		{
			printf("Bye!\n");
		}
	}
	return (0);
}
