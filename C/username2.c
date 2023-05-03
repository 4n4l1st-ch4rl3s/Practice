#include <stdio.h>

int main(void)
{
	char name[50] = "Ainstein";

	printf("Initial name: %s\n", name);
	name[1] = 'I';
	name[5] = 'E';
	name[7] = 'N';

	printf("Final name: %s\n", name);

	return (0);
}
