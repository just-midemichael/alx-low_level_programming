#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entyr point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int a;
	char me;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	for (me = 'a'; me <= 'f'; me++)
	{
		putchar(me);
	}
	putchar('\n');

	return (0);	

}
