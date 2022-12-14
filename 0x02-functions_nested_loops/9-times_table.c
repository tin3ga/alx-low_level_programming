#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0
 * row = row, col = column, digit = digits of current result
 * Return: times table
 */
void times_table(void)
{
	int row, col, digit;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (col = 1; col <= 9; col++)
		{
			digit = (row * col);
			if ((digit / 10) > 0)
			{
				_putchar((digit / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((digit % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
