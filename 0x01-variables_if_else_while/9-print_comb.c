#include <stdio.h>

/**
 * main - program execution starts here
 * Description: this is the main function
 * Return: an integer to signify success or failure
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		purchar(number);
		if (number != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	
	purchar('\n');

	return (0);
}
