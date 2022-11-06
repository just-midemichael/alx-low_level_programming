#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: An argument counter
 * @argv: An argument values
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	printf("%d\n", argc - 1);

	return (0);
}
