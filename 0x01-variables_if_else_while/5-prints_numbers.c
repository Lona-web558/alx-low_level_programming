#include <stdio.h>

/**
 * main - return main function
 *
 * Return: 0
 *
 */
int main(void)
{
	int s = 0;
	int e = 9;
	 while (s <= e)
	 {
		 putchar(s + '0');
		 s++;
	 }
	 putchar('\n');
	 return (0);
}
