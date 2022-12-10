#include <stdio.h>
/**
 * main : main code block
 * Description: putchar function to print the alphabet in lowercase and uppercase.
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for ( alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for ( alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
