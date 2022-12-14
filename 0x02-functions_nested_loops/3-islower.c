#include "main.h"

/**
  * _islower : check for lowercase character
  *
  *
  * Return 1 : for lowercase character
  * Return 0 : for other
  */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
