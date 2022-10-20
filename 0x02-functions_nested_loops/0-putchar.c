#include "main.h"

/**
 * main - Check the code
 *
 * Return: Always 0.
 */

int main(void)
{

	char word[8] = "_putchar";
	int p;

	for (p = 0; p < 8 ; p++)
	{
		_putchar(word[p]);
	}
	_putchar('\n');

	return (0);

}
