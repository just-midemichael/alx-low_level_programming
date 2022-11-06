#include "main.h"
#include <stdio.h>

/**
 * program that prints all arguments it receives
 * including the first one and ending with a new line
 * @argc - counts the arguments
 * @argv - arrays of the argunments value
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
