#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
  unsigned int x;

  if (size == 0)
      return (NULL);

  char *s = (char*)malloc(size * sizeof(char));

  for (x = 0; x < size; x++)
    s[x] = c;

  return (s);
}
