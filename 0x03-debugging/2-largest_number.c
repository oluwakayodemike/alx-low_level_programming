#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b > c)
			largest = c;
		else
			largest = b;
	}
	return (largest);


	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}
