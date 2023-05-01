#include <stdio.h>

/**
 * main - prompt user to add their name
 * Return: 0 (success)
 */

int main(void)
{
	char name[50];

	printf("Enter yor name: ");
	fgets(name, sizeof(name), stdin);
	printf("Your name is: %s\n", name);
	return (0);
}
