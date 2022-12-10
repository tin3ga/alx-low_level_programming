#include <stdio.h>
/**
 * main :  main code block
 * while loops
 * Description: Print all numbers of base 10 using putchar
 * Return: 0
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		 putchar(i + '0');
		 i++;

	}
	putchar('\n');

	return (0);
}
