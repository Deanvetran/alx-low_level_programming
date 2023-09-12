#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c stdout
 *@c: the charactr to print
 *Return: on success 1.
 *On error, -1 is returned, and error is set approprietly.
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
