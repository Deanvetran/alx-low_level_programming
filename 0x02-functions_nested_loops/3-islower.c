#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}



/**alternatively i can print it using the ASCII code*/

#include "main.h"
int _islower(int c)
{
  if (c >=97 && c<=122)
    return (1);
  else
    return (0);
}