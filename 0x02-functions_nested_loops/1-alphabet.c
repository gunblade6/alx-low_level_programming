#include <unistd.h> 
#include "main.h"

void print_alphabet(void);

/**
 * main - print alphabet
 *
 *	Return: always 0
 *
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
  int i = 97;
  while (i <= 122)
  {
    _putchar(i);
    i++;
  }
  _putchar('\n');
  return;
}