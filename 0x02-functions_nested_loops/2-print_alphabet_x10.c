#include "main.h"
/**
  *print_alphabet_10x - Prints the alphabet 10 times
  *
  *Return: Always 0 (success)
  */
void print_alphabet_10x(void)
{
	int n;
	int m;

	for (m = 1; n <= 10; n++)
	{
		for (m = 97; m <= 122; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
