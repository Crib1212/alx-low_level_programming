#include <unistd.h>
/**
 * main - A C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.
*  Return: 1
*/
int main()
{
  write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
  return (1);
}
