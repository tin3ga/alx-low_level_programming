#include "main.h"

/**
  * print_sign : print the sign of a number
  *
  * Return 1 : for positive
  * Return 0 : for zero
  * Return -1 : for negative
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

}
