#include "main.h"

/**
  * _islower - print if character is lowercase or not
  *
  * @c: checks input
  *
  * Return: return 1 if 'c' is lowercase otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	
		return (0);
}
