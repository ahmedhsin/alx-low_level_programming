#include "main.h"

/**
 * print_alphabet_x10 - check the code
 *
 * return void
 */

void print_alphabet_x10(void)
{
  char x;
  int c = 10;
  
  while (c--)
  {
    x = 'a';
    while (x <= 'z')
    {
      _putchar(x);
      x++;
    }
    _putchar('\n');
  }
}
