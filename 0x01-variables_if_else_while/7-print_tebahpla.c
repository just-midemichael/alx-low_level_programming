#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	char wol;

	for (wol = 'z'; wol >= 'a'; wol++)
	{
		putchar(wol);
	}
	putchar('\n');

	return (0);

}
