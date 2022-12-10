#include <stdio.h>
/**
 * main : main code block
 * Description: putchar function to print the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for ( alphabet = 'z' ; alphabet <= 'a' ; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
