
#include <stdio.h>

int main(void)
{
	int choice;

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
	} while (choice != 0);

	printf("take care!\n");
	return (0);
}

