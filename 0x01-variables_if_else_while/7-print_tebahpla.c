#include <stdio.h>

/**
 * main - program execution starts here
 * Description: this is the main function
 * ReturnL an integer to signify success or fail
 */
int main(void)
{
	int alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	
	putchar('\n');

	return (0);
}
