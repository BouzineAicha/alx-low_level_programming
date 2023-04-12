#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
  int a = 0, b, c = 0;
  char *newStr = NULL;

  while (str[c] != '\0')
    {
      a++;
      c++;
    }

  newStr = malloc(sizeof(char) * (a + 1));

  if (str == NULL)
    return (NULL);

  for (b = 0; b <= a; b++)
    newStr[b] = str[b];

  return (newStr);
}
