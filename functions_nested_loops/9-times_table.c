#include "main.h"

/**
 * times_table - Prints the 9 times table starting from zero
 */
void times_table(void)
{
	int row;
	int col;
	int value;

	row = 0;
	while (row <= 9)
	{
		col = 0;
		while (col <= 9)
		{
			value = row * col;
			if (col != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (value < 10)
					_putchar(' ');
			}
			if (value >= 10)
				_putchar('0' + value / 10);
			_putchar('0' + value % 10);
			col++;
		}
		_putchar('\n');
		row++;
	}
}
