#include "main.h"
/**
 * factorial - gets factorial of n
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
  
int main(void)
{
    int f;
    f = factorial(6) ;
    printf("0! =%d\n", f);
    return (0);
    
}

