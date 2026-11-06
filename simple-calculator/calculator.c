
#include <stdio.h>

int main(void)
{
	int choice;
	double a, b;

	do
	{
		printf("chill calculator\n");
		printf("1) +\n");
		printf("2) -\n");
		printf("3) *\n");
		printf("4) /\n");
		printf("0) Quit\n");
		printf("what you want? ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
		else if (choice >= 1 && choice <= 4)
		{
			printf("A: ");
			if (scanf("%lf", &a) != 1)
				return (1);

			printf("B: ");
			if (scanf("%lf", &b) != 1)
				return (1);

			if (choice == 1)
				printf("Result: %g\n", a + b);
			else if (choice == 2)
				printf("Result: %g\n", a - b);
			else if (choice == 3)
				printf("Result: %g\n", a * b);
			else if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %g\n", a / b);
		}
	} while (choice != 0);

	printf("Bye!\n");
	return (0);
}
