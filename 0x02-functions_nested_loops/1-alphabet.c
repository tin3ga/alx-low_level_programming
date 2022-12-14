#include <stdio.h>
#include "main.h"

/**
 * main : main code block
 *
 * Description: Prints alphabet
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <='z' )
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');

}
