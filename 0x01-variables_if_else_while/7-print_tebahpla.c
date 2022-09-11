#include <stdio.h>
/**
 * main - the function prints alphabet in reverse
 *
 * Description: thefuncion prints al
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'z' ; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

