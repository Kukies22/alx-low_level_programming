#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print lowercase and uppercase alphabets'
  *Return: always 0
  */
int main(void)
{
	int n = 97;
	int n = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (n <= 90)
		n++;
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
