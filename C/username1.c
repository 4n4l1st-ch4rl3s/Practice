#include <stdio.h>

/**
 * main - Uses scanf to take userinput
 * it terminates after the first whitespace
 * Return: 0 (SUCCESS)
 */

int main(void)
{
	char name[50];

	printf("Enter your name: ");
	scanf("%s", name);
	printf("Your name is: %s\n", name);
	return(0);
}
