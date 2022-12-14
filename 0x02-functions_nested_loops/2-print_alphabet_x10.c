#include "main.h"

/**
 * main : main code block
 *
 * Description: Prints alphabet 10 times
 *
 * Return: 0 on success
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter = 'a';

	while (count < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;

		}
		_putchar('\n');
		count++;
	}
}
