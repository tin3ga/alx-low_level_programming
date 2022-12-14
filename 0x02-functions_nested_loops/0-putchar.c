#include <stdio.h>
#include "main.h"

/**
 * main : main code block
 *
 * Description: Prints _putchar
 *
 * Return: 0 on success
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);

}


