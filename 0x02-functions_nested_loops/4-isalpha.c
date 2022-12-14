#include "main.h"

/**
  * _isalpha : check for alphabetic character
  *
  *
  * Return 1 : for lowercase or uppercase letter
  * Return 0 : for other
  */
int _isalpha(int c)
{
	if ( (c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}

	return (0);
}
