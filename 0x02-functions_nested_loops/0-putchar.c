#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints main
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "main";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
